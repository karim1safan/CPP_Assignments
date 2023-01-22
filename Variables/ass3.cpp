/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ not valid | Bad Practice] => strats with number
  __name      [ valid | Good Practice] => starts with underscore
  name@name   [ not valid | Bad Practice] => contain a special character (@)
  name10name  [ valid | Good Practice] => contain a number in the middel txt
  name!name   [ not valid | Bad Practice] => contain a special character (!)
  first_NAME  [ valid | Good Practice] => contain underscore
  first_name  [ valid | Best Practice] => snake_case
  firstName   [ valid | Best Practice] => cammelCase
  first name  [ not valid | Bad Practice] => contain spaces
  fn          [ valid | Good Practice] => character
  public      [ not valid | Bad Practice] => reserved world
  Public      [ valid | Good Practice] => not reserved word because the first word capital
*/
