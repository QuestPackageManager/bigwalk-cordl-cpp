#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/UpdateSessionOptions.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__UpdateSessionOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModification_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::UpdateSessionOptions.get_SessionModificationHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::SessionModification* (::Epic::OnlineServices::Sessions::UpdateSessionOptions::*)()>(&::Epic::OnlineServices::Sessions::UpdateSessionOptions::get_SessionModificationHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::UpdateSessionOptions>(),
                        {"get_SessionModificationHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::UpdateSessionOptions.set_SessionModificationHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::UpdateSessionOptions::*)(::Epic::OnlineServices::Sessions::SessionModification*)>(&::Epic::OnlineServices::Sessions::UpdateSessionOptions::set_SessionModificationHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::UpdateSessionOptions>(),
                        {"set_SessionModificationHandle", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::SessionModification*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Sessions::SessionModification* Epic::OnlineServices::Sessions::UpdateSessionOptions::get_SessionModificationHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::UpdateSessionOptions>(),
                        {"get_SessionModificationHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::SessionModification*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::UpdateSessionOptions::set_SessionModificationHandle(::Epic::OnlineServices::Sessions::SessionModification*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::UpdateSessionOptions>(),
                        {"set_SessionModificationHandle", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::SessionModification*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_SessionModificationHandle_k__BackingField", ty: "::Epic::OnlineServices::Sessions::SessionModification*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::UpdateSessionOptions::UpdateSessionOptions(::Epic::OnlineServices::Sessions::SessionModification*  _SessionModificationHandle_k__BackingField) noexcept  {
this->_SessionModificationHandle_k__BackingField = _SessionModificationHandle_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::UpdateSessionOptions::UpdateSessionOptions()   {
}
