#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/RoadConfig.hpp"
#include "JBooth/MicroVerseCore/zzzz__Road_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadConfig_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadConfig_Overlay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::RoadConfig_Overlay::*)()>(&::JBooth::MicroVerseCore::RoadConfig_Overlay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18140ddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig_Overlay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_get_label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr ::StringW const& JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_get_label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr void JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_set_label(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___label = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_get_prefabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabs;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_get_prefabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabs;
}
constexpr void JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_set_prefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabs = value;
}
constexpr bool& JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_get_spawnFirstAsDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnFirstAsDefault;
}
constexpr bool const& JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_get_spawnFirstAsDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnFirstAsDefault;
}
constexpr void JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_set_spawnFirstAsDefault(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnFirstAsDefault = value;
}
constexpr float_t& JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_get_overlayChance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlayChance;
}
constexpr float_t const& JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_get_overlayChance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlayChance;
}
constexpr void JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_set_overlayChance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlayChance = value;
}
constexpr bool& JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_get_alternate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alternate;
}
constexpr bool const& JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_get_alternate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alternate;
}
constexpr void JBooth::MicroVerseCore::RoadConfig_Overlay::__cordl_internal_set_alternate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alternate = value;
}
inline void JBooth::MicroVerseCore::RoadConfig_Overlay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig_Overlay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::RoadConfig_Overlay* JBooth::MicroVerseCore::RoadConfig_Overlay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::RoadConfig_Overlay*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::RoadConfig_Overlay::RoadConfig_Overlay()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadConfig_Entry.FindOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::RoadConfig_Overlay* (::JBooth::MicroVerseCore::RoadConfig_Entry::*)(::StringW)>(&::JBooth::MicroVerseCore::RoadConfig_Entry::FindOverlay)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814063e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig_Entry*>(),
                        {"FindOverlay", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadConfig_Entry.FindOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::RoadConfig_Overlay* (::JBooth::MicroVerseCore::RoadConfig_Entry::*)(::StringW, ::UnityEngine::GameObject*)>(&::JBooth::MicroVerseCore::RoadConfig_Entry::FindOverlay)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181406460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig_Entry*>(),
                        {"FindOverlay", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadConfig_Entry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::RoadConfig_Entry::*)()>(&::JBooth::MicroVerseCore::RoadConfig_Entry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181406530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig_Entry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& JBooth::MicroVerseCore::RoadConfig_Entry::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr float_t const& JBooth::MicroVerseCore::RoadConfig_Entry::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void JBooth::MicroVerseCore::RoadConfig_Entry::__cordl_internal_set_size(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& JBooth::MicroVerseCore::RoadConfig_Entry::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& JBooth::MicroVerseCore::RoadConfig_Entry::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void JBooth::MicroVerseCore::RoadConfig_Entry::__cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
constexpr ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*>& JBooth::MicroVerseCore::RoadConfig_Entry::__cordl_internal_get_overlays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlays;
}
constexpr ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*> const& JBooth::MicroVerseCore::RoadConfig_Entry::__cordl_internal_get_overlays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlays;
}
constexpr void JBooth::MicroVerseCore::RoadConfig_Entry::__cordl_internal_set_overlays(::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlays = value;
}
inline ::JBooth::MicroVerseCore::RoadConfig_Overlay* JBooth::MicroVerseCore::RoadConfig_Entry::FindOverlay(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig_Entry*>(),
                        {"FindOverlay", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::RoadConfig_Overlay*>(this, ___internal_method, name);
}
inline ::JBooth::MicroVerseCore::RoadConfig_Overlay* JBooth::MicroVerseCore::RoadConfig_Entry::FindOverlay(::StringW  name, ::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig_Entry*>(),
                        {"FindOverlay", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::RoadConfig_Overlay*>(this, ___internal_method, name, prefab);
}
inline void JBooth::MicroVerseCore::RoadConfig_Entry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig_Entry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::RoadConfig_Entry* JBooth::MicroVerseCore::RoadConfig_Entry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::RoadConfig_Entry*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::RoadConfig_Entry::RoadConfig_Entry()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadConfig.FindOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::RoadConfig_Overlay* (::JBooth::MicroVerseCore::RoadConfig::*)(::JBooth::MicroVerseCore::RoadConfig_Entry*, ::StringW)>(&::JBooth::MicroVerseCore::RoadConfig::FindOverlay)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18140e0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig*>(),
                        {"FindOverlay", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadConfig_Entry*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadConfig.FindOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::RoadConfig_Overlay* (::JBooth::MicroVerseCore::RoadConfig::*)(::JBooth::MicroVerseCore::RoadConfig_Entry*, ::StringW, ::UnityEngine::GameObject*)>(&::JBooth::MicroVerseCore::RoadConfig::FindOverlay)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18140df50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig*>(),
                        {"FindOverlay", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadConfig_Entry*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadConfig.GetAllOverlays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::RoadConfig_Overlay*>* (::JBooth::MicroVerseCore::RoadConfig::*)(::JBooth::MicroVerseCore::RoadConfig_Entry*)>(&::JBooth::MicroVerseCore::RoadConfig::GetAllOverlays)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18140e170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig*>(),
                        {"GetAllOverlays", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadConfig_Entry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::RoadConfig::*)()>(&::JBooth::MicroVerseCore::RoadConfig::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18140e210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Entry*>& JBooth::MicroVerseCore::RoadConfig::__cordl_internal_get_entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Entry*> const& JBooth::MicroVerseCore::RoadConfig::__cordl_internal_get_entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr void JBooth::MicroVerseCore::RoadConfig::__cordl_internal_set_entries(::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Entry*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entries = value;
}
constexpr ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*>& JBooth::MicroVerseCore::RoadConfig::__cordl_internal_get_sharedOverlays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedOverlays;
}
constexpr ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*> const& JBooth::MicroVerseCore::RoadConfig::__cordl_internal_get_sharedOverlays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedOverlays;
}
constexpr void JBooth::MicroVerseCore::RoadConfig::__cordl_internal_set_sharedOverlays(::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedOverlays = value;
}
constexpr ::JBooth::MicroVerseCore::Road_Orientation& JBooth::MicroVerseCore::RoadConfig::__cordl_internal_get_orientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orientation;
}
constexpr ::JBooth::MicroVerseCore::Road_Orientation const& JBooth::MicroVerseCore::RoadConfig::__cordl_internal_get_orientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orientation;
}
constexpr void JBooth::MicroVerseCore::RoadConfig::__cordl_internal_set_orientation(::JBooth::MicroVerseCore::Road_Orientation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orientation = value;
}
constexpr float_t& JBooth::MicroVerseCore::RoadConfig::__cordl_internal_get_modelWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelWidth;
}
constexpr float_t const& JBooth::MicroVerseCore::RoadConfig::__cordl_internal_get_modelWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelWidth;
}
constexpr void JBooth::MicroVerseCore::RoadConfig::__cordl_internal_set_modelWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modelWidth = value;
}
constexpr bool& JBooth::MicroVerseCore::RoadConfig::__cordl_internal_get_stretchToFit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchToFit;
}
constexpr bool const& JBooth::MicroVerseCore::RoadConfig::__cordl_internal_get_stretchToFit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchToFit;
}
constexpr void JBooth::MicroVerseCore::RoadConfig::__cordl_internal_set_stretchToFit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stretchToFit = value;
}
constexpr float_t& JBooth::MicroVerseCore::RoadConfig::__cordl_internal_get_stretchToFitBoost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchToFitBoost;
}
constexpr float_t const& JBooth::MicroVerseCore::RoadConfig::__cordl_internal_get_stretchToFitBoost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchToFitBoost;
}
constexpr void JBooth::MicroVerseCore::RoadConfig::__cordl_internal_set_stretchToFitBoost(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stretchToFitBoost = value;
}
inline ::JBooth::MicroVerseCore::RoadConfig_Overlay* JBooth::MicroVerseCore::RoadConfig::FindOverlay(::JBooth::MicroVerseCore::RoadConfig_Entry*  e, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig*>(),
                        {"FindOverlay", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadConfig_Entry*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::RoadConfig_Overlay*>(this, ___internal_method, e, name);
}
inline ::JBooth::MicroVerseCore::RoadConfig_Overlay* JBooth::MicroVerseCore::RoadConfig::FindOverlay(::JBooth::MicroVerseCore::RoadConfig_Entry*  e, ::StringW  name, ::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig*>(),
                        {"FindOverlay", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadConfig_Entry*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::RoadConfig_Overlay*>(this, ___internal_method, e, name, prefab);
}
inline ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::RoadConfig_Overlay*>* JBooth::MicroVerseCore::RoadConfig::GetAllOverlays(::JBooth::MicroVerseCore::RoadConfig_Entry*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig*>(),
                        {"GetAllOverlays", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadConfig_Entry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::RoadConfig_Overlay*>*>(this, ___internal_method, e);
}
inline void JBooth::MicroVerseCore::RoadConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::RoadConfig* JBooth::MicroVerseCore::RoadConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::RoadConfig*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::RoadConfig::RoadConfig()   {
}
