[@bs.module "react-dates"] [@react.component]
external make:
  (
    ~date: option(MomentRe.Moment.t),
    ~id: string=?,
    ~focused: bool=?,
    ~onDateChange: MomentRe.Moment.t => unit=?,
    ~onFocusChange: MomentRe.Moment.t => unit=?
  ) =>
  React.element =
  "DayPickerSingleDateController";