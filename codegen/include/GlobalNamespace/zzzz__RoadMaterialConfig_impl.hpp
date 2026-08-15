#pragma once
// IWYU pragma private; include "GlobalNamespace/RoadMaterialConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__RoadMaterialConfig_def.hpp"
#include "GlobalNamespace/zzzz__RoadMaterialConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoadMaterialConfig_Entry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoadMaterialConfig_Entry::*)()>(&::GlobalNamespace::RoadMaterialConfig_Entry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoadMaterialConfig_Entry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::RoadMaterialConfig_Entry::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::RoadMaterialConfig_Entry::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void GlobalNamespace::RoadMaterialConfig_Entry::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::RoadMaterialConfig_Entry::__cordl_internal_get_preview()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preview;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::RoadMaterialConfig_Entry::__cordl_internal_get_preview() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preview;
}
constexpr void GlobalNamespace::RoadMaterialConfig_Entry::__cordl_internal_set_preview(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preview = value;
}
inline void GlobalNamespace::RoadMaterialConfig_Entry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoadMaterialConfig_Entry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoadMaterialConfig_Entry* GlobalNamespace::RoadMaterialConfig_Entry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoadMaterialConfig_Entry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoadMaterialConfig_Entry::RoadMaterialConfig_Entry()   {
}
//  Writing Method size for method: ::GlobalNamespace::RoadMaterialConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoadMaterialConfig::*)()>(&::GlobalNamespace::RoadMaterialConfig::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18140e230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoadMaterialConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::RoadMaterialConfig::__cordl_internal_get_contentID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentID;
}
constexpr ::StringW const& GlobalNamespace::RoadMaterialConfig::__cordl_internal_get_contentID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentID;
}
constexpr void GlobalNamespace::RoadMaterialConfig::__cordl_internal_set_contentID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contentID = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RoadMaterialConfig_Entry*>*& GlobalNamespace::RoadMaterialConfig::__cordl_internal_get_templateMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateMaterials;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RoadMaterialConfig_Entry*>* const& GlobalNamespace::RoadMaterialConfig::__cordl_internal_get_templateMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateMaterials;
}
constexpr void GlobalNamespace::RoadMaterialConfig::__cordl_internal_set_templateMaterials(::System::Collections::Generic::List_1<::GlobalNamespace::RoadMaterialConfig_Entry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___templateMaterials = value;
}
inline void GlobalNamespace::RoadMaterialConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoadMaterialConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoadMaterialConfig* GlobalNamespace::RoadMaterialConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoadMaterialConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoadMaterialConfig::RoadMaterialConfig()   {
}
