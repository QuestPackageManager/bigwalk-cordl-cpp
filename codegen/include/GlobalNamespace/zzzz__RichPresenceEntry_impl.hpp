#pragma once
// IWYU pragma private; include "GlobalNamespace/RichPresenceEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RichPresenceEntry_def.hpp"
#include "GlobalNamespace/zzzz__PS4RichPresenceEntry_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RichPresenceEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RichPresenceEntry::*)(::StringW, ::StringW, ::StringW, ::GlobalNamespace::PS4RichPresenceEntry*)>(&::GlobalNamespace::RichPresenceEntry::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1817595d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RichPresenceEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PS4RichPresenceEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceEntry.get_XboxPresenceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RichPresenceEntry::*)()>(&::GlobalNamespace::RichPresenceEntry::get_XboxPresenceId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RichPresenceEntry*>(),
                        {"get_XboxPresenceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceEntry.get_SteamPresenceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RichPresenceEntry::*)()>(&::GlobalNamespace::RichPresenceEntry::get_SteamPresenceId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RichPresenceEntry*>(),
                        {"get_SteamPresenceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceEntry.get_EpicPresenceText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RichPresenceEntry::*)()>(&::GlobalNamespace::RichPresenceEntry::get_EpicPresenceText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RichPresenceEntry*>(),
                        {"get_EpicPresenceText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceEntry.get_PS4Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PS4RichPresenceEntry* (::GlobalNamespace::RichPresenceEntry::*)()>(&::GlobalNamespace::RichPresenceEntry::get_PS4Data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RichPresenceEntry*>(),
                        {"get_PS4Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::RichPresenceEntry::__cordl_internal_get_mXboxPresenceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mXboxPresenceId;
}
constexpr ::StringW const& GlobalNamespace::RichPresenceEntry::__cordl_internal_get_mXboxPresenceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mXboxPresenceId;
}
constexpr void GlobalNamespace::RichPresenceEntry::__cordl_internal_set_mXboxPresenceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mXboxPresenceId = value;
}
constexpr ::StringW& GlobalNamespace::RichPresenceEntry::__cordl_internal_get_mSteamPresenceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mSteamPresenceId;
}
constexpr ::StringW const& GlobalNamespace::RichPresenceEntry::__cordl_internal_get_mSteamPresenceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mSteamPresenceId;
}
constexpr void GlobalNamespace::RichPresenceEntry::__cordl_internal_set_mSteamPresenceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mSteamPresenceId = value;
}
constexpr ::StringW& GlobalNamespace::RichPresenceEntry::__cordl_internal_get_mEpicPresenceText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mEpicPresenceText;
}
constexpr ::StringW const& GlobalNamespace::RichPresenceEntry::__cordl_internal_get_mEpicPresenceText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mEpicPresenceText;
}
constexpr void GlobalNamespace::RichPresenceEntry::__cordl_internal_set_mEpicPresenceText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mEpicPresenceText = value;
}
constexpr ::GlobalNamespace::PS4RichPresenceEntry*& GlobalNamespace::RichPresenceEntry::__cordl_internal_get_mPS4PresenceData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPS4PresenceData;
}
constexpr ::GlobalNamespace::PS4RichPresenceEntry* const& GlobalNamespace::RichPresenceEntry::__cordl_internal_get_mPS4PresenceData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPS4PresenceData;
}
constexpr void GlobalNamespace::RichPresenceEntry::__cordl_internal_set_mPS4PresenceData(::GlobalNamespace::PS4RichPresenceEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mPS4PresenceData = value;
}
inline void GlobalNamespace::RichPresenceEntry::_ctor(::StringW  aXboxPresenceId, ::StringW  aSteamPresenceId, ::StringW  aEpicPresenceText, ::GlobalNamespace::PS4RichPresenceEntry*  aPS4Data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RichPresenceEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PS4RichPresenceEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aXboxPresenceId, aSteamPresenceId, aEpicPresenceText, aPS4Data);
}
inline ::StringW GlobalNamespace::RichPresenceEntry::get_XboxPresenceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RichPresenceEntry*>(),
                        {"get_XboxPresenceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RichPresenceEntry::get_SteamPresenceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RichPresenceEntry*>(),
                        {"get_SteamPresenceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RichPresenceEntry::get_EpicPresenceText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RichPresenceEntry*>(),
                        {"get_EpicPresenceText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::PS4RichPresenceEntry* GlobalNamespace::RichPresenceEntry::get_PS4Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RichPresenceEntry*>(),
                        {"get_PS4Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PS4RichPresenceEntry*>(this, ___internal_method);
}
inline ::GlobalNamespace::RichPresenceEntry* GlobalNamespace::RichPresenceEntry::New_ctor(::StringW  aXboxPresenceId, ::StringW  aSteamPresenceId, ::StringW  aEpicPresenceText, ::GlobalNamespace::PS4RichPresenceEntry*  aPS4Data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RichPresenceEntry*>(aXboxPresenceId, aSteamPresenceId, aEpicPresenceText, aPS4Data));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RichPresenceEntry::RichPresenceEntry()   {
}
