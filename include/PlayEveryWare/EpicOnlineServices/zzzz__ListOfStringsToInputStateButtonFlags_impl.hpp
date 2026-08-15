#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ListOfStringsToInputStateButtonFlags.hpp"
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ListOfStringsToEnumConverter_1_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ListOfStringsToInputStateButtonFlags_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JArray_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags.FromStringArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::InputStateButtonFlags (::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags::*)(::Newtonsoft::Json::Linq::JArray*)>(&::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags::FromStringArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180541130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags::*)()>(&::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180541140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::UI::InputStateButtonFlags PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags::FromStringArray(::Newtonsoft::Json::Linq::JArray*  array)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::InputStateButtonFlags>(this, ___internal_method, array);
}
inline void PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags* PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags::ListOfStringsToInputStateButtonFlags()   {
}
