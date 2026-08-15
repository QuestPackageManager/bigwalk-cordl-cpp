#pragma once
// IWYU pragma private; include "Dissonance/Config/ChatRoomSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Dissonance/Config/zzzz__ChatRoomSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Config::ChatRoomSettings.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Dissonance::Config::ChatRoomSettings> (*)()>(&::Dissonance::Config::ChatRoomSettings::get_Instance)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805da7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::ChatRoomSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::ChatRoomSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::ChatRoomSettings::*)()>(&::Dissonance::Config::ChatRoomSettings::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805da760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::ChatRoomSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::ChatRoomSettings.FindRoomById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Config::ChatRoomSettings::*)(uint16_t)>(&::Dissonance::Config::ChatRoomSettings::FindRoomById)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805da260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::ChatRoomSettings*>(),
                        {"FindRoomById", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::ChatRoomSettings.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Dissonance::Config::ChatRoomSettings> (*)()>(&::Dissonance::Config::ChatRoomSettings::Load)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805da3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::ChatRoomSettings*>(),
                        {"Load", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::ChatRoomSettings.Preload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Dissonance::Config::ChatRoomSettings::Preload)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805da400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::ChatRoomSettings*>(),
                        {"Preload", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& Dissonance::Config::ChatRoomSettings::__cordl_internal_get_Names()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Names;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Dissonance::Config::ChatRoomSettings::__cordl_internal_get_Names() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Names;
}
constexpr void Dissonance::Config::ChatRoomSettings::__cordl_internal_set_Names(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Names = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>*& Dissonance::Config::ChatRoomSettings::__cordl_internal_get__nameLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>* const& Dissonance::Config::ChatRoomSettings::__cordl_internal_get__nameLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameLookup;
}
constexpr void Dissonance::Config::ChatRoomSettings::__cordl_internal_set__nameLookup(::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nameLookup = value;
}
inline void Dissonance::Config::ChatRoomSettings::setStaticF_SettingsFilePath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "SettingsFilePath", ::Dissonance::Config::ChatRoomSettings*>(std::forward<::StringW>(value));
}
inline ::StringW Dissonance::Config::ChatRoomSettings::getStaticF_SettingsFilePath()  {
return ::cordl_internals::getStaticField<::StringW, "SettingsFilePath", ::Dissonance::Config::ChatRoomSettings*>();
}
inline void Dissonance::Config::ChatRoomSettings::setStaticF_DefaultRooms(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "DefaultRooms", ::Dissonance::Config::ChatRoomSettings*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* Dissonance::Config::ChatRoomSettings::getStaticF_DefaultRooms()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "DefaultRooms", ::Dissonance::Config::ChatRoomSettings*>();
}
inline void Dissonance::Config::ChatRoomSettings::setStaticF__instance(::UnityW<::Dissonance::Config::ChatRoomSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::Dissonance::Config::ChatRoomSettings>, "_instance", ::Dissonance::Config::ChatRoomSettings*>(std::forward<::UnityW<::Dissonance::Config::ChatRoomSettings>>(value));
}
inline ::UnityW<::Dissonance::Config::ChatRoomSettings> Dissonance::Config::ChatRoomSettings::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Dissonance::Config::ChatRoomSettings>, "_instance", ::Dissonance::Config::ChatRoomSettings*>();
}
inline ::UnityW<::Dissonance::Config::ChatRoomSettings> Dissonance::Config::ChatRoomSettings::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::ChatRoomSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Dissonance::Config::ChatRoomSettings>>(nullptr, ___internal_method);
}
inline void Dissonance::Config::ChatRoomSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::ChatRoomSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Dissonance::Config::ChatRoomSettings::FindRoomById(uint16_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::ChatRoomSettings*>(),
                        {"FindRoomById", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, id);
}
inline ::UnityW<::Dissonance::Config::ChatRoomSettings> Dissonance::Config::ChatRoomSettings::Load()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::ChatRoomSettings*>(),
                        {"Load", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Dissonance::Config::ChatRoomSettings>>(nullptr, ___internal_method);
}
inline void Dissonance::Config::ChatRoomSettings::Preload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::ChatRoomSettings*>(),
                        {"Preload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Dissonance::Config::ChatRoomSettings* Dissonance::Config::ChatRoomSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Config::ChatRoomSettings*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Config::ChatRoomSettings::ChatRoomSettings()   {
}
