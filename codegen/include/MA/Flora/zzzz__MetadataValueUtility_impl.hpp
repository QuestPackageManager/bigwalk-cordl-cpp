#pragma once
// IWYU pragma private; include "MA/Flora/MetadataValueUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__MetadataValueUtility_def.hpp"
#include "UnityEngine/Rendering/zzzz__MetadataValue_def.hpp"
//  Writing Method size for method: ::MA::Flora::MetadataValueUtility.IsOverriden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::MetadataValue)>(&::MA::Flora::MetadataValueUtility::IsOverriden)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18145f570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MetadataValueUtility*>(),
                        {"IsOverriden", {}, {::i2c::type_of<::UnityEngine::Rendering::MetadataValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MetadataValueUtility.Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Rendering::MetadataValue)>(&::MA::Flora::MetadataValueUtility::Address)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18145f560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MetadataValueUtility*>(),
                        {"Address", {}, {::i2c::type_of<::UnityEngine::Rendering::MetadataValue>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::MetadataValueUtility::IsOverriden(::UnityEngine::Rendering::MetadataValue  metadataValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MetadataValueUtility*>(),
                        {"IsOverriden", {}, {::i2c::type_of<::UnityEngine::Rendering::MetadataValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, metadataValue);
}
inline uint32_t MA::Flora::MetadataValueUtility::Address(::UnityEngine::Rendering::MetadataValue  metadataValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MetadataValueUtility*>(),
                        {"Address", {}, {::i2c::type_of<::UnityEngine::Rendering::MetadataValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, metadataValue);
}
// Ctor Parameters []
constexpr ::MA::Flora::MetadataValueUtility::MetadataValueUtility()   {
}
