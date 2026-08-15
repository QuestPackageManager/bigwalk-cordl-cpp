#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/RoadSystemConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadSystemConfig_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadConfig_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadSystemConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint::*)()>(&::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint::__cordl_internal_get_intersection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intersection;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint::__cordl_internal_get_intersection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intersection;
}
constexpr void JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint::__cordl_internal_set_intersection(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intersection = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig>& JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint::__cordl_internal_get_config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig> const& JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint::__cordl_internal_get_config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr void JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint::__cordl_internal_set_config(::UnityW<::JBooth::MicroVerseCore::RoadConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___config = value;
}
inline void JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint* JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint::RoadSystemConfig_SplinePaint()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadSystemConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::RoadSystemConfig::*)()>(&::JBooth::MicroVerseCore::RoadSystemConfig::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18141eb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystemConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_get_namePrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___namePrefix;
}
constexpr ::StringW const& JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_get_namePrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___namePrefix;
}
constexpr void JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_set_namePrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___namePrefix = value;
}
constexpr bool& JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_get_allowShaping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowShaping;
}
constexpr bool const& JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_get_allowShaping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowShaping;
}
constexpr void JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_set_allowShaping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowShaping = value;
}
constexpr float_t& JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_get_shapingSizeHandleStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shapingSizeHandleStart;
}
constexpr float_t const& JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_get_shapingSizeHandleStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shapingSizeHandleStart;
}
constexpr void JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_set_shapingSizeHandleStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shapingSizeHandleStart = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig>& JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_get_splinePaintDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splinePaintDefault;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig> const& JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_get_splinePaintDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splinePaintDefault;
}
constexpr void JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_set_splinePaintDefault(::UnityW<::JBooth::MicroVerseCore::RoadConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splinePaintDefault = value;
}
constexpr bool& JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_get_modifyTerrainByDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifyTerrainByDefault;
}
constexpr bool const& JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_get_modifyTerrainByDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifyTerrainByDefault;
}
constexpr void JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_set_modifyTerrainByDefault(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifyTerrainByDefault = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint*>*& JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_get_splinePaintList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splinePaintList;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint*>* const& JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_get_splinePaintList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splinePaintList;
}
constexpr void JBooth::MicroVerseCore::RoadSystemConfig::__cordl_internal_set_splinePaintList(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splinePaintList = value;
}
inline void JBooth::MicroVerseCore::RoadSystemConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystemConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::RoadSystemConfig* JBooth::MicroVerseCore::RoadSystemConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::RoadSystemConfig*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::RoadSystemConfig::RoadSystemConfig()   {
}
