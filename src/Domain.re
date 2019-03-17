open Belt;

module String15 = {
  type t = string;
  type make = string => option(t);
  type toString = t => string;
};

module String50 = {
  type t = string;
  type make = string => option(t);
  type toString = t => string;
};

module String255 = {
  type t = string;
  type make = string => option(t);
  type toString = t => string;
};

module GuildshipId = {
  type t = string;
  type make = string => t;
  type toString = t => string;
};

module UserProfile = {
  type t = {
    name: String50.t,
    location: option(String255.t),
  };
};

module DiscordId = {
  type t = string;
  type make = string => t;
  type toString = t => string;
};

module EmailAddress = {
  type t = string;
  type make = string => option(t);
  type toString = t => string;
};

module Credential = {
  type t =
    | Discord(DiscordId.t)
    | Email(EmailAddress.t);
};

module UsernameDiscriminator = {
  type t = int;
  type make = int => option(t);
  type toString = t => string;
};

module User = {
  type t = {
    id: GuildshipId.t,
    username: String15.t,
    discriminator: UsernameDiscriminator.t,
    profile: UserProfile.t,
    credentials: list(Credential.t),
  };

  type make =
    (
      ~id: string,
      ~username: string,
      ~discriminator: int,
      ~name: string,
      ~location: option(string),
      ~credential: Credential.t
    ) =>
    Result.t(t, string);
};

module ReactionSymbol = {
  type t = string;
  type toString = t => string;
};

module Reaction = {
  type t = {
    id: GuildshipId.t,
    user: User.t,
    symbol: ReactionSymbol.t,
  };
};

module GuildRole = {
  type t = {
    id: GuildshipId.t,
    name: String50.t,
  };
};

module ForumThreadReply = {
  type t = {
    id: GuildshipId.t,
    user: User.t,
    body: string,
    reactions: list(Reaction.t),
  };
};

module ForumThread = {
  type t = {
    id: GuildshipId.t,
    user: GuildshipId.t,
    title: string,
    replies: list(ForumThreadReply.t),
  };

  type make = (~title: string, ~body: string) => Result.t(t, string);
};

module ForumCategory = {
  type t = {
    id: GuildshipId.t,
    name: String50.t,
    threads: list(ForumThread.t),
  };

  type make = string => Result.t(t, string);
};

module Forum = {
  type t = {categories: list(ForumCategory.t)};
};

module CalendarEventDateTime = {
  type t =
    | SingleDay(Js.Date.t)
    | DayRange(Js.Date.t, Js.Date.t)
    | TimeRange(Js.Date.t, Js.Date.t);
};

module CalendarEvent = {
  type t = {
    id: GuildshipId.t,
    title: string,
    duration: CalendarEventDateTime.t,
    reactions: list(Reaction.t),
  };
};

module Calendar = {
  type t = {events: list(CalendarEvent.t)};
};

module BlogPost = {
  type t = {
    id: GuildshipId.t,
    title: String255.t,
    author: User.t,
    body: string,
    reactions: list(Reaction.t),
  };

  type make = (~title: string, ~body: string) => Result.t(t, string);
};

module Blog = {
  type t = {posts: list(BlogPost.t)};
};

module Guild = {
  type t = {
    id: GuildshipId.t,
    owner: User.t,
    name: String50.t,
    members: list(User.t),
    roles: list(GuildRole.t),
    forum: Forum.t,
    calendar: Calendar.t,
    blog: Blog.t,
  };

  type make = string => Result.t(t, string);
};
