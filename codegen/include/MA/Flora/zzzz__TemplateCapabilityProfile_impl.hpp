#pragma once
// IWYU pragma private; include "MA/Flora/TemplateCapabilityProfile.hpp"
#include "MA/Flora/zzzz__BatchBuiltinPropertyFlags_impl.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_impl.hpp"
#include "MA/Flora/zzzz__TemplateOptions_impl.hpp"
#include "MA/Flora/zzzz__TemplateRenderFlags_impl.hpp"
#include "MA/Flora/zzzz__TemplateCapabilityProfile_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::TemplateCapabilityProfile.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateCapabilityProfile::*)(::MA::Flora::TemplateCapabilityProfile)>(&::MA::Flora::TemplateCapabilityProfile::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814a7e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateCapabilityProfile>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TemplateCapabilityProfile>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateCapabilityProfile.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateCapabilityProfile::*)(::System::Object*)>(&::MA::Flora::TemplateCapabilityProfile::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814a7dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TemplateCapabilityProfile>(),
                    {::i2c::class_of<::MA::Flora::TemplateCapabilityProfile>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateCapabilityProfile.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TemplateCapabilityProfile::*)()>(&::MA::Flora::TemplateCapabilityProfile::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814a7ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TemplateCapabilityProfile>(),
                    {::i2c::class_of<::MA::Flora::TemplateCapabilityProfile>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool MA::Flora::TemplateCapabilityProfile::Equals(::MA::Flora::TemplateCapabilityProfile  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateCapabilityProfile>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TemplateCapabilityProfile>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::TemplateCapabilityProfile::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TemplateCapabilityProfile>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::TemplateCapabilityProfile::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TemplateCapabilityProfile>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TemplateCapabilityProfile>"
constexpr  MA::Flora::TemplateCapabilityProfile::operator ::System::IEquatable_1<::MA::Flora::TemplateCapabilityProfile>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TemplateCapabilityProfile>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TemplateCapabilityProfile>"
constexpr ::System::IEquatable_1<::MA::Flora::TemplateCapabilityProfile>* MA::Flora::TemplateCapabilityProfile::i___System__IEquatable_1___MA__Flora__TemplateCapabilityProfile_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TemplateCapabilityProfile>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "MetadataFlags", ty: "::MA::Flora::BatchBuiltinPropertyFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "BatchDomainIndex", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "EffectiveFlags", ty: "::MA::Flora::TemplateRenderFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "Options", ty: "::MA::Flora::TemplateOptions", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateCapabilityProfile::TemplateCapabilityProfile(::MA::Flora::BatchBuiltinPropertyFlags  MetadataFlags, ::MA::Flora::BatchDomainIndex  BatchDomainIndex, ::MA::Flora::TemplateRenderFlags  EffectiveFlags, ::MA::Flora::TemplateOptions  Options) noexcept  {
this->MetadataFlags = MetadataFlags;
this->BatchDomainIndex = BatchDomainIndex;
this->EffectiveFlags = EffectiveFlags;
this->Options = Options;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateCapabilityProfile::TemplateCapabilityProfile()   {
}
