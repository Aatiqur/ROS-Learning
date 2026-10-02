#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to custom_interfaces__msg__Complex

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Complex {

    // This member is not documented.
    #[allow(missing_docs)]
    pub real: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub imaginary: i64,

}



impl Default for Complex {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Complex::default())
  }
}

impl rosidl_runtime_rs::Message for Complex {
  type RmwMsg = super::msg::rmw::Complex;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        real: msg.real,
        imaginary: msg.imaginary,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      real: msg.real,
      imaginary: msg.imaginary,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      real: msg.real,
      imaginary: msg.imaginary,
    }
  }
}


