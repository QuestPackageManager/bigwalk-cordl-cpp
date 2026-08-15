#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SaveData_def.hpp"
#include "GlobalNamespace/zzzz__SaveEntryString_def.hpp"
#include "GlobalNamespace/zzzz__SaveEntry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaveData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveData::*)()>(&::GlobalNamespace::SaveData::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180397480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveData.get_lastPlayedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::SaveData::*)()>(&::GlobalNamespace::SaveData::get_lastPlayedTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180397530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"get_lastPlayedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveData.set_lastPlayedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveData::*)(::System::DateTime)>(&::GlobalNamespace::SaveData::set_lastPlayedTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180397560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"set_lastPlayedTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveData.GetIntValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SaveData::*)(::StringW, int32_t, ::by_ref<bool>)>(&::GlobalNamespace::SaveData::GetIntValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180396f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"GetIntValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveData.SetIntValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveData::*)(::StringW, int32_t, ::by_ref<bool>)>(&::GlobalNamespace::SaveData::SetIntValue)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180396fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"SetIntValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveData.TryGetStringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SaveData::*)(::StringW, ::by_ref<::StringW>)>(&::GlobalNamespace::SaveData::TryGetStringValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803973b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"TryGetStringValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveData.SetStringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveData::*)(::StringW, ::StringW, ::by_ref<bool>)>(&::GlobalNamespace::SaveData::SetStringValue)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180397220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"SetStringValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveData.SetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveData::*)(::StringW)>(&::GlobalNamespace::SaveData::SetName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180397190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"SetName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveData.SetInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveData::*)()>(&::GlobalNamespace::SaveData::SetInventory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180397180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"SetInventory", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SaveData::__cordl_internal_get_slotName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotName;
}
constexpr ::StringW const& GlobalNamespace::SaveData::__cordl_internal_get_slotName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotName;
}
constexpr void GlobalNamespace::SaveData::__cordl_internal_set_slotName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slotName = value;
}
constexpr ::StringW& GlobalNamespace::SaveData::__cordl_internal_get_password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr ::StringW const& GlobalNamespace::SaveData::__cordl_internal_get_password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr void GlobalNamespace::SaveData::__cordl_internal_set_password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___password = value;
}
constexpr ::StringW& GlobalNamespace::SaveData::__cordl_internal_get_filenameUid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filenameUid;
}
constexpr ::StringW const& GlobalNamespace::SaveData::__cordl_internal_get_filenameUid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filenameUid;
}
constexpr void GlobalNamespace::SaveData::__cordl_internal_set_filenameUid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filenameUid = value;
}
constexpr int64_t& GlobalNamespace::SaveData::__cordl_internal_get_lastPlayedTimeAsLong()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayedTimeAsLong;
}
constexpr int64_t const& GlobalNamespace::SaveData::__cordl_internal_get_lastPlayedTimeAsLong() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayedTimeAsLong;
}
constexpr void GlobalNamespace::SaveData::__cordl_internal_set_lastPlayedTimeAsLong(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPlayedTimeAsLong = value;
}
constexpr bool& GlobalNamespace::SaveData::__cordl_internal_get_skipAidsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipAidsActive;
}
constexpr bool const& GlobalNamespace::SaveData::__cordl_internal_get_skipAidsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipAidsActive;
}
constexpr void GlobalNamespace::SaveData::__cordl_internal_set_skipAidsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skipAidsActive = value;
}
constexpr int32_t& GlobalNamespace::SaveData::__cordl_internal_get_totalPlaytime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalPlaytime;
}
constexpr int32_t const& GlobalNamespace::SaveData::__cordl_internal_get_totalPlaytime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalPlaytime;
}
constexpr void GlobalNamespace::SaveData::__cordl_internal_set_totalPlaytime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalPlaytime = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntry>*& GlobalNamespace::SaveData::__cordl_internal_get_entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntry>* const& GlobalNamespace::SaveData::__cordl_internal_get_entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr void GlobalNamespace::SaveData::__cordl_internal_set_entries(::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entries = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntryString>*& GlobalNamespace::SaveData::__cordl_internal_get_stringEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringEntries;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntryString>* const& GlobalNamespace::SaveData::__cordl_internal_get_stringEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringEntries;
}
constexpr void GlobalNamespace::SaveData::__cordl_internal_set_stringEntries(::System::Collections::Generic::List_1<::GlobalNamespace::SaveEntryString>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringEntries = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::SaveData::__cordl_internal_get_inventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventory;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::SaveData::__cordl_internal_get_inventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventory;
}
constexpr void GlobalNamespace::SaveData::__cordl_internal_set_inventory(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inventory = value;
}
inline void GlobalNamespace::SaveData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DateTime GlobalNamespace::SaveData::get_lastPlayedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"get_lastPlayedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GlobalNamespace::SaveData::set_lastPlayedTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"set_lastPlayedTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SaveData::GetIntValue(::StringW  key, int32_t  fallback, ::by_ref<bool>  foundValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"GetIntValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key, fallback, foundValue);
}
inline void GlobalNamespace::SaveData::SetIntValue(::StringW  key, int32_t  value, ::by_ref<bool>  causedChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"SetIntValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value, causedChange);
}
inline bool GlobalNamespace::SaveData::TryGetStringValue(::StringW  key, ::by_ref<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"TryGetStringValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline void GlobalNamespace::SaveData::SetStringValue(::StringW  key, ::StringW  value, ::by_ref<bool>  causedChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"SetStringValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value, causedChange);
}
inline void GlobalNamespace::SaveData::SetName(::StringW  newName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"SetName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newName);
}
inline void GlobalNamespace::SaveData::SetInventory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveData*>(),
                        {"SetInventory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaveData* GlobalNamespace::SaveData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaveData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaveData::SaveData()   {
}
