open BsStorybook.Story;
open StorybookUtils;
open SharedUiComponents;
open ReactUtils;

storiesOf("Styleguide", _module)
->add("Typography", () =>
    <>
      <Heading level=1> "Heading 1"->str </Heading>
      <Heading level=2> "Heading 2"->str </Heading>
      <Heading level=3> "Heading 3"->str </Heading>
      <Heading level=4> "Heading 4"->str </Heading>
      <Heading level=5> "Heading 5"->str </Heading>
      <Heading level=6> "Heading 6"->str </Heading>
      <Text block=true>
        "Est sit atque quidem. Atque ducimus rem aspernatur in eveniet eum necessitatibus veritatis. Ex dolores velit ipsum qui neque numquam aut. Autem officia cupiditate accusantium sit a aliquid beatae vero. Beatae tempore nostrum rerum. Et iure quo quos tempore qui repellat. Rerum consectetur nemo iure minima porro iusto aliquid. Ullam dignissimos animi repellendus quibusdam a id officiis dignissimos. Quo asperiores rerum atque eum rerum. Reprehenderit in tenetur dolor et. Doloribus cum necessitatibus quia corporis libero officia quos quis. Tempore doloribus quia architecto et temporibus qui molestias. Fugiat expedita ab adipisci autem rerum provident eius. Cumque est esse nulla eveniet quod ea possimus dolores."
        ->str
      </Text>
      <Text> "Text"->str </Text>
    </>
  );
