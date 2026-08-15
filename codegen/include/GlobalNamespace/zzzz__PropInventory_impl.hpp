#pragma once
// IWYU pragma private; include "GlobalNamespace/PropInventory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PropInventory_def.hpp"
#include "GlobalNamespace/zzzz__InventorySpawn_def.hpp"
#include "GlobalNamespace/zzzz__InventoryZone_def.hpp"
#include "GlobalNamespace/zzzz__PropInventory_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropInventory_InventoryProp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropInventory_InventoryProp::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropInventory_InventoryProp::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180394af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory_InventoryProp>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PropInventory_InventoryProp::_ctor(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory_InventoryProp>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prop);
}
// Ctor Parameters [CppParam { name: "prop", ty: "::UnityW<::GlobalNamespace::Prop>", modifiers: "", def_value: Some("{}") }, CppParam { name: "isInSpawnArea", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PropInventory_InventoryProp::PropInventory_InventoryProp(::UnityW<::GlobalNamespace::Prop>  prop, bool  isInSpawnArea) noexcept  {
this->prop = prop;
this->isInSpawnArea = isInSpawnArea;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropInventory_InventoryProp::PropInventory_InventoryProp()   {
}
//  Writing Method size for method: ::GlobalNamespace::PropInventory.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PropInventory* (*)()>(&::GlobalNamespace::PropInventory::get_instance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180384a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropInventory.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropInventory::*)()>(&::GlobalNamespace::PropInventory::Initialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180384700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropInventory.AddZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::InventoryZone*)>(&::GlobalNamespace::PropInventory::AddZone)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803842a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"AddZone", {}, {::i2c::type_of<::GlobalNamespace::InventoryZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropInventory.RemoveZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::InventoryZone*)>(&::GlobalNamespace::PropInventory::RemoveZone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180384970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"RemoveZone", {}, {::i2c::type_of<::GlobalNamespace::InventoryZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropInventory.AddProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropInventory::AddProp)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180384030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"AddProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropInventory.RemoveProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropInventory::RemoveProp)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180384790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"RemoveProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropInventory.ShouldSave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropInventory::ShouldSave)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803849c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"ShouldSave", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropInventory.RecordZoneChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PropInventory::RecordZoneChange)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180384750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"RecordZoneChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropInventory.RecordSaveTypeChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PropInventory::RecordSaveTypeChange)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180384750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"RecordSaveTypeChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropInventory.FillSaveList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::PropInventory::FillSaveList)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1803843b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"FillSaveList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropInventory.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropInventory::*)()>(&::GlobalNamespace::PropInventory::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180384a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropInventory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropInventory::*)()>(&::GlobalNamespace::PropInventory::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PropInventory::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PropInventory::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PropInventory::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::InventorySpawn>& GlobalNamespace::PropInventory::__cordl_internal_get_inventorySpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventorySpawn;
}
constexpr ::UnityW<::GlobalNamespace::InventorySpawn> const& GlobalNamespace::PropInventory::__cordl_internal_get_inventorySpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventorySpawn;
}
constexpr void GlobalNamespace::PropInventory::__cordl_internal_set_inventorySpawn(::UnityW<::GlobalNamespace::InventorySpawn>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inventorySpawn = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InventoryZone>>*& GlobalNamespace::PropInventory::__cordl_internal_get_inventoryZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventoryZones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InventoryZone>>* const& GlobalNamespace::PropInventory::__cordl_internal_get_inventoryZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventoryZones;
}
constexpr void GlobalNamespace::PropInventory::__cordl_internal_set_inventoryZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InventoryZone>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inventoryZones = value;
}
constexpr bool& GlobalNamespace::PropInventory::__cordl_internal_get_saveRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveRequired;
}
constexpr bool const& GlobalNamespace::PropInventory::__cordl_internal_get_saveRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveRequired;
}
constexpr void GlobalNamespace::PropInventory::__cordl_internal_set_saveRequired(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveRequired = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PropInventory_InventoryProp>*& GlobalNamespace::PropInventory::__cordl_internal_get__props()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____props;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PropInventory_InventoryProp>* const& GlobalNamespace::PropInventory::__cordl_internal_get__props() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____props;
}
constexpr void GlobalNamespace::PropInventory::__cordl_internal_set__props(::System::Collections::Generic::List_1<::GlobalNamespace::PropInventory_InventoryProp>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____props = value;
}
inline ::GlobalNamespace::PropInventory* GlobalNamespace::PropInventory::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PropInventory*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PropInventory::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropInventory::AddZone(::GlobalNamespace::InventoryZone*  inventoryZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"AddZone", {}, {::i2c::type_of<::GlobalNamespace::InventoryZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inventoryZone);
}
inline void GlobalNamespace::PropInventory::RemoveZone(::GlobalNamespace::InventoryZone*  inventoryZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"RemoveZone", {}, {::i2c::type_of<::GlobalNamespace::InventoryZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inventoryZone);
}
inline void GlobalNamespace::PropInventory::AddProp(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"AddProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prop);
}
inline void GlobalNamespace::PropInventory::RemoveProp(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"RemoveProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prop);
}
inline bool GlobalNamespace::PropInventory::ShouldSave(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"ShouldSave", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, prop);
}
inline void GlobalNamespace::PropInventory::RecordZoneChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"RecordZoneChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PropInventory::RecordSaveTypeChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"RecordSaveTypeChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PropInventory::FillSaveList(::System::Collections::Generic::List_1<::StringW>*  saveList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"FillSaveList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, saveList);
}
inline void GlobalNamespace::PropInventory::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropInventory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropInventory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropInventory* GlobalNamespace::PropInventory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropInventory*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropInventory::PropInventory()   {
}
