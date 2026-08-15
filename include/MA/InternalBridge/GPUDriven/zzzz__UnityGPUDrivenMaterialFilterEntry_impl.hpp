#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/UnityGPUDrivenMaterialFilterEntry.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenBitOpType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "MA/InternalBridge/GPUDriven/zzzz__UnityGPUDrivenMaterialFilterEntry_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenMaterialFilterEntry_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry.op_Implicit___UnityEngine__Rendering__GPUDrivenMaterialFilterEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry (*)(::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry::op_Implicit___UnityEngine__Rendering__GPUDrivenMaterialFilterEntry)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ece080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry.op_Implicit___MA__InternalBridge__GPUDriven__UnityGPUDrivenMaterialFilterEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry (*)(::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry::op_Implicit___MA__InternalBridge__GPUDriven__UnityGPUDrivenMaterialFilterEntry)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ece080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry::op_Implicit___UnityEngine__Rendering__GPUDrivenMaterialFilterEntry(::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry>(nullptr, ___internal_method, entry);
}
inline ::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry::op_Implicit___MA__InternalBridge__GPUDriven__UnityGPUDrivenMaterialFilterEntry(::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry>(nullptr, ___internal_method, entry);
}
// Ctor Parameters [CppParam { name: "op", ty: "::UnityEngine::Rendering::GPUDrivenBitOpType", modifiers: "", def_value: Some("{}") }, CppParam { name: "minQueueValue", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxQueueValue", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyTag", ty: "::UnityEngine::Rendering::ShaderTagId", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueTag", ty: "::UnityEngine::Rendering::ShaderTagId", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyword", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry::UnityGPUDrivenMaterialFilterEntry(::UnityEngine::Rendering::GPUDrivenBitOpType  op, int32_t  minQueueValue, int32_t  maxQueueValue, ::UnityEngine::Rendering::ShaderTagId  keyTag, ::UnityEngine::Rendering::ShaderTagId  valueTag, int32_t  flags, ::StringW  keyword) noexcept  {
this->op = op;
this->minQueueValue = minQueueValue;
this->maxQueueValue = maxQueueValue;
this->keyTag = keyTag;
this->valueTag = valueTag;
this->flags = flags;
this->keyword = keyword;
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry::UnityGPUDrivenMaterialFilterEntry()   {
}
