#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsSelectCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSelectCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSelectCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSelectCallback::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSelectCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181db22a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSelectCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSelectCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsSelectCallback::*)(::ArrayW<::StringW>)>(&::Mono::Btls::MonoBtlsSelectCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsSelectCallback*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsSelectCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsSelectCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSelectCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t Mono::Btls::MonoBtlsSelectCallback::Invoke(::ArrayW<::StringW>  acceptableIssuers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsSelectCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, acceptableIssuers);
}
inline ::Mono::Btls::MonoBtlsSelectCallback* Mono::Btls::MonoBtlsSelectCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsSelectCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsSelectCallback::MonoBtlsSelectCallback()   {
}
