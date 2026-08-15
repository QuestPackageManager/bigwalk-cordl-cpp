#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ICallbackInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::ICallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::ICallbackInfoInternal::*)()>(&::Epic::OnlineServices::ICallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::ICallbackInfoInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::ICallbackInfoInternal*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::ICallbackInfoInternal::get_ClientDataPointer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::ICallbackInfoInternal*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
