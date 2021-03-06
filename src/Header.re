let component = ReasonReact.statelessComponent("Header");

let appBar =
  Css.style([
    Css.relative |> Css.position,
    1.0 |> Css.em |> Css.marginBottom,
  ]);

let make = _children => {
  ...component,
  render: _self =>
    MaterialUi.(
      <AppBar position=`Static className=appBar color=`Primary>
        <Toolbar>
          <Typography variant=`Title color=`Inherit noWrap=true>
            {"To-do App" |> ReasonReact.string}
          </Typography>
        </Toolbar>
      </AppBar>
    ),
};