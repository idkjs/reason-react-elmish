[@react.component]
let make = () => {
  let dispatch = AppStore.useDispatch();
  let result = AppStore.useSelector(model => model.result);

  <div>
    <button
      onClick={_event => {
        dispatch(Click());
        dispatch(Click());
      }}>
      {ReasonReact.string("Click")}
    </button>
    <button onClick={_event => dispatch(SetName("Random"))}>
      {ReasonReact.string("Test rerender")}
    </button>
    <div>
      {switch (result) {
       | Some(true) => ReasonReact.string("Success")
       | Some(false) => ReasonReact.string("Failure")
       | None => ReasonReact.string("Not run")
       }}
    </div>
  </div>;
};
