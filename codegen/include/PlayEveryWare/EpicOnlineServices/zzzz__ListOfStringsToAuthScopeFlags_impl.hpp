#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ListOfStringsToAuthScopeFlags.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthScopeFlags_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ListOfStringsToEnumConverter_1_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ListOfStringsToAuthScopeFlags_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthScopeFlags_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JArray_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags.FromStringArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::AuthScopeFlags (::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags::*)(::Newtonsoft::Json::Linq::JArray*)>(&::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags::FromStringArray)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805410c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags::*)()>(&::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180541120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Auth::AuthScopeFlags PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags::FromStringArray(::Newtonsoft::Json::Linq::JArray*  array)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::AuthScopeFlags>(this, ___internal_method, array);
}
inline void PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags* PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags::ListOfStringsToAuthScopeFlags()   {
}
