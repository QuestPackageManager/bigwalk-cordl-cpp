#pragma once
// IWYU pragma private; include "System/Resources/ManifestBasedResourceGroveler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__ManifestBasedResourceGroveler_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ManifestBasedResourceGroveler::*)(::System::Resources::ResourceManager_ResourceManagerMediator*)>(&::System::Resources::ManifestBasedResourceGroveler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Resources::ResourceManager_ResourceManagerMediator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetNeutralResourcesLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)(::System::Reflection::Assembly*, ::by_ref<::System::Resources::UltimateResourceFallbackLocation>)>(&::System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181664550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                        {"GetNeutralResourcesLanguage", {}, {::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::by_ref<::System::Resources::UltimateResourceFallbackLocation>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetNeutralResourcesLanguageAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::Assembly*, ::by_ref<::StringW>, ::by_ref<int16_t>)>(&::System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816644e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                        {"GetNeutralResourcesLanguageAttribute", {}, {::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Resources::ResourceManager_ResourceManagerMediator*& System::Resources::ManifestBasedResourceGroveler::__cordl_internal_get__mediator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mediator;
}
constexpr ::System::Resources::ResourceManager_ResourceManagerMediator* const& System::Resources::ManifestBasedResourceGroveler::__cordl_internal_get__mediator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mediator;
}
constexpr void System::Resources::ManifestBasedResourceGroveler::__cordl_internal_set__mediator(::System::Resources::ResourceManager_ResourceManagerMediator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mediator = value;
}
inline void System::Resources::ManifestBasedResourceGroveler::_ctor(::System::Resources::ResourceManager_ResourceManagerMediator*  mediator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Resources::ResourceManager_ResourceManagerMediator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mediator);
}
inline ::System::Globalization::CultureInfo* System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage(::System::Reflection::Assembly*  a, ::by_ref<::System::Resources::UltimateResourceFallbackLocation>  fallbackLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                        {"GetNeutralResourcesLanguage", {}, {::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::by_ref<::System::Resources::UltimateResourceFallbackLocation>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method, a, fallbackLocation);
}
inline bool System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute(::System::Reflection::Assembly*  assembly, ::by_ref<::StringW>  cultureName, ::by_ref<int16_t>  fallbackLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                        {"GetNeutralResourcesLanguageAttribute", {}, {::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assembly, cultureName, fallbackLocation);
}
inline ::System::Resources::ManifestBasedResourceGroveler* System::Resources::ManifestBasedResourceGroveler::New_ctor(::System::Resources::ResourceManager_ResourceManagerMediator*  mediator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::ManifestBasedResourceGroveler*>(mediator));
}
/// @brief Convert operator to "::System::Resources::IResourceGroveler"
constexpr  System::Resources::ManifestBasedResourceGroveler::operator ::System::Resources::IResourceGroveler*() noexcept {
return static_cast<::System::Resources::IResourceGroveler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Resources::IResourceGroveler"
constexpr ::System::Resources::IResourceGroveler* System::Resources::ManifestBasedResourceGroveler::i___System__Resources__IResourceGroveler() noexcept {
return static_cast<::System::Resources::IResourceGroveler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Resources::ManifestBasedResourceGroveler::ManifestBasedResourceGroveler()   {
}
