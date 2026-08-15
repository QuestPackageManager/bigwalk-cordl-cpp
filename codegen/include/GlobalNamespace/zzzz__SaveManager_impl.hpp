#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SaveManager_def.hpp"
#include "GlobalNamespace/zzzz__SaveData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaveManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SaveManager* (*)()>(&::GlobalNamespace::SaveManager::get_instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180398390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.get_worldName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::SaveManager::get_worldName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803983c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"get_worldName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.GetAllSaveDatasInFolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::SaveData*>* (*)()>(&::GlobalNamespace::SaveManager::GetAllSaveDatasInFolder)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180397830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"GetAllSaveDatasInFolder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.WriteCurrentSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SaveManager::WriteCurrentSaveData)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1803981b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"WriteCurrentSaveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SaveData*)>(&::GlobalNamespace::SaveManager::Delete)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180397800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"Delete", {}, {::i2c::type_of<::GlobalNamespace::SaveData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.SetIntValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t)>(&::GlobalNamespace::SaveManager::SetIntValue)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180397e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"SetIntValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.SetStringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::SaveManager::SetStringValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180398130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"SetStringValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.GetIntValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (*)(::StringW)>(&::GlobalNamespace::SaveManager::GetIntValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180397b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"GetIntValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.GetIntValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, bool)>(&::GlobalNamespace::SaveManager::GetIntValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180397a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"GetIntValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.GetStringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::SaveManager::GetStringValue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180397c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"GetStringValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.RenameSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::SaveManager::RenameSlot)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180397d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"RenameSlot", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.SetInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SaveManager::SetInventory)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180398060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"SetInventory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.GetIsInInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::SaveManager::GetIsInInventory)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180397bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"GetIsInInventory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.SaveRebindData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::SaveManager::SaveRebindData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180397dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"SaveRebindData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.GetRebindData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>)>(&::GlobalNamespace::SaveManager::GetRebindData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180397c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"GetRebindData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager.SetPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::SaveManager::SetPassword)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803980c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"SetPassword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveManager::*)()>(&::GlobalNamespace::SaveManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SaveManager::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::SaveManager::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::SaveManager::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::GlobalNamespace::SaveData*& GlobalNamespace::SaveManager::__cordl_internal_get_currentData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentData;
}
constexpr ::GlobalNamespace::SaveData* const& GlobalNamespace::SaveManager::__cordl_internal_get_currentData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentData;
}
constexpr void GlobalNamespace::SaveManager::__cordl_internal_set_currentData(::GlobalNamespace::SaveData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentData = value;
}
inline ::GlobalNamespace::SaveManager* GlobalNamespace::SaveManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SaveManager*>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::SaveManager::get_worldName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"get_worldName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SaveData*>* GlobalNamespace::SaveManager::GetAllSaveDatasInFolder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"GetAllSaveDatasInFolder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::SaveData*>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SaveManager::WriteCurrentSaveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"WriteCurrentSaveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SaveManager::Delete(::GlobalNamespace::SaveData*  saveData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"Delete", {}, {::i2c::type_of<::GlobalNamespace::SaveData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, saveData);
}
inline void GlobalNamespace::SaveManager::SetIntValue(::StringW  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"SetIntValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, value);
}
inline void GlobalNamespace::SaveManager::SetStringValue(::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"SetStringValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, value);
}
inline ::System::Nullable_1<int32_t> GlobalNamespace::SaveManager::GetIntValue(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"GetIntValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(nullptr, ___internal_method, key);
}
inline int32_t GlobalNamespace::SaveManager::GetIntValue(::StringW  key, int32_t  fallback, bool  saveFallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"GetIntValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, key, fallback, saveFallback);
}
inline ::StringW GlobalNamespace::SaveManager::GetStringValue(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"GetStringValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key);
}
inline void GlobalNamespace::SaveManager::RenameSlot(::StringW  oldName, ::StringW  newName, ::StringW  filenameGuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"RenameSlot", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, oldName, newName, filenameGuid);
}
inline void GlobalNamespace::SaveManager::SetInventory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"SetInventory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::SaveManager::GetIsInInventory(::StringW  savablePropGuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"GetIsInInventory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, savablePropGuid);
}
inline void GlobalNamespace::SaveManager::SaveRebindData(::StringW  fileName, ::StringW  rebindData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"SaveRebindData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fileName, rebindData);
}
inline bool GlobalNamespace::SaveManager::GetRebindData(::StringW  fileName, ::by_ref<::StringW>  rebindData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"GetRebindData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fileName, rebindData);
}
inline void GlobalNamespace::SaveManager::SetPassword(::StringW  newPassword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {"SetPassword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newPassword);
}
inline void GlobalNamespace::SaveManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaveManager* GlobalNamespace::SaveManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaveManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaveManager::SaveManager()   {
}
