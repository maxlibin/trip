module type T = {type t;};

module Make = (T: T) => {
  type opt = {
    value: T.t,
    label: string,
  };

  [@bs.module "react-select"] [@react.component]
  external make:
    (
      ~autoFocus: bool=?,
      ~className: string=?,
      ~classNamePrefix: string=?,
      ~isDisabled: bool=?,
      ~isMulti: bool=?,
      ~isSearchable: bool=?,
      ~name: string=?,
      ~onChange: opt => unit=?,
      ~options: array(opt)=?,
      ~placeholder: string=?,
      ~noOptionsMessage: string=?,
      ~value: opt=?,
      ~styles: 'style=?,
      ~children: React.element=?
    ) =>
    React.element =
    "default";
};

module String =
  Make({
    type t = string;
  });

module Country =
  Make({
    type t = CountryT.t;
  });