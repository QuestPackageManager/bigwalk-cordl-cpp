#pragma once
// IWYU pragma private; include "GlobalNamespace/InventoryZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__InventoryZone_def.hpp"
#include "GlobalNamespace/zzzz__PropZone_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InventoryZone.get_props
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>* (::GlobalNamespace::InventoryZone::*)()>(&::GlobalNamespace::InventoryZone::get_props)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18037e900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {"get_props", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InventoryZone.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InventoryZone::*)()>(&::GlobalNamespace::InventoryZone::OnEnable)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18037e4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InventoryZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InventoryZone::*)()>(&::GlobalNamespace::InventoryZone::OnDisable)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18037e2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InventoryZone.IsRelevant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InventoryZone::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::InventoryZone::IsRelevant)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {"IsRelevant", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InventoryZone.OnPropEnterZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InventoryZone::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::InventoryZone::OnPropEnterZone)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18037e740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {"OnPropEnterZone", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InventoryZone.OnPropExitZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InventoryZone::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::InventoryZone::OnPropExitZone)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18037e840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {"OnPropExitZone", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InventoryZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InventoryZone::*)()>(&::GlobalNamespace::InventoryZone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PropZone>& GlobalNamespace::InventoryZone::__cordl_internal_get_propZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propZone;
}
constexpr ::UnityW<::GlobalNamespace::PropZone> const& GlobalNamespace::InventoryZone::__cordl_internal_get_propZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propZone;
}
constexpr void GlobalNamespace::InventoryZone::__cordl_internal_set_propZone(::UnityW<::GlobalNamespace::PropZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propZone = value;
}
constexpr bool& GlobalNamespace::InventoryZone::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::InventoryZone::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::InventoryZone::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*& GlobalNamespace::InventoryZone::__cordl_internal_get__props()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____props;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>* const& GlobalNamespace::InventoryZone::__cordl_internal_get__props() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____props;
}
constexpr void GlobalNamespace::InventoryZone::__cordl_internal_set__props(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____props = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>* GlobalNamespace::InventoryZone::get_props()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {"get_props", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*>(this, ___internal_method);
}
inline void GlobalNamespace::InventoryZone::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InventoryZone::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::InventoryZone::IsRelevant(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {"IsRelevant", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prop);
}
inline void GlobalNamespace::InventoryZone::OnPropEnterZone(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {"OnPropEnterZone", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::InventoryZone::OnPropExitZone(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {"OnPropExitZone", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::InventoryZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InventoryZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InventoryZone* GlobalNamespace::InventoryZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InventoryZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InventoryZone::InventoryZone()   {
}
