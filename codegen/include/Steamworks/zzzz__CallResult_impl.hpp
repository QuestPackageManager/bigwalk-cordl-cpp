#pragma once
// IWYU pragma private; include "Steamworks/CallResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__CallResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Steamworks::CallResult.GetCallbackType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Steamworks::CallResult::*)()>(&::Steamworks::CallResult::GetCallbackType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::CallResult*>(),
                    {::i2c::class_of<::Steamworks::CallResult*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallResult.OnRunCallResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CallResult::*)(::System::IntPtr, bool, uint64_t)>(&::Steamworks::CallResult::OnRunCallResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::CallResult*>(),
                    {::i2c::class_of<::Steamworks::CallResult*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallResult.SetUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CallResult::*)()>(&::Steamworks::CallResult::SetUnregistered)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::CallResult*>(),
                    {::i2c::class_of<::Steamworks::CallResult*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CallResult::*)()>(&::Steamworks::CallResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Type* Steamworks::CallResult::GetCallbackType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CallResult*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Steamworks::CallResult::OnRunCallResult(::System::IntPtr  pvParam, bool  bFailed, uint64_t  hSteamAPICall)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CallResult*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pvParam, bFailed, hSteamAPICall);
}
inline void Steamworks::CallResult::SetUnregistered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CallResult*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Steamworks::CallResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Steamworks::CallResult* Steamworks::CallResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::CallResult*>());
}
// Ctor Parameters []
constexpr ::Steamworks::CallResult::CallResult()   {
}
