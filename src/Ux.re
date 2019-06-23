module Intent = {
  type t =
    | None
    | Success
    | Warning
    | Danger;

  let toString =
    fun
    | None => "none"
    | Success => "success"
    | Warning => "warning"
    | Danger => "danger";
};
