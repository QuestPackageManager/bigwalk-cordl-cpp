#pragma once
// IWYU pragma private; include "MA/Flora/RendererStateKey.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "MA/Flora/zzzz__RendererStateKey_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::RendererStateKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::RendererStateKey::*)(::MA::Flora::RendererStateKey)>(&::MA::Flora::RendererStateKey::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814a7ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::RendererStateKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererStateKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::RendererStateKey::*)(::System::Object*)>(&::MA::Flora::RendererStateKey::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814a7ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::RendererStateKey>(),
                    {::i2c::class_of<::MA::Flora::RendererStateKey>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererStateKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::RendererStateKey::*)()>(&::MA::Flora::RendererStateKey::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814a7c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::RendererStateKey>(),
                    {::i2c::class_of<::MA::Flora::RendererStateKey>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool MA::Flora::RendererStateKey::Equals(::MA::Flora::RendererStateKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::RendererStateKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::RendererStateKey::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::RendererStateKey>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::RendererStateKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::RendererStateKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::RendererStateKey>"
constexpr  MA::Flora::RendererStateKey::operator ::System::IEquatable_1<::MA::Flora::RendererStateKey>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::RendererStateKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::RendererStateKey>"
constexpr ::System::IEquatable_1<::MA::Flora::RendererStateKey>* MA::Flora::RendererStateKey::i___System__IEquatable_1___MA__Flora__RendererStateKey_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::RendererStateKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "OverrideMaterialId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "DescriptorSignature", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MetadataFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DescriptorCount", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Type", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::RendererStateKey::RendererStateKey(::UnityEngine::EntityId  OverrideMaterialId, uint64_t  DescriptorSignature, uint32_t  MetadataFlags, uint16_t  DescriptorCount, uint8_t  LodIndex, uint8_t  Type) noexcept  {
this->OverrideMaterialId = OverrideMaterialId;
this->DescriptorSignature = DescriptorSignature;
this->MetadataFlags = MetadataFlags;
this->DescriptorCount = DescriptorCount;
this->LodIndex = LodIndex;
this->Type = Type;
}
// Ctor Parameters []
constexpr ::MA::Flora::RendererStateKey::RendererStateKey()   {
}
