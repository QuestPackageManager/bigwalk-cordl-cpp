#pragma once
// IWYU pragma private; include "MA/Flora/InstanceOcclusionTestSubviewSettings.hpp"
#include "MA/Flora/zzzz__InstanceOcclusionTestSubviewSettings_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubviewOcclusionTest_def.hpp"
//  Writing Method size for method: ::MA::Flora::InstanceOcclusionTestSubviewSettings.FromSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::InstanceOcclusionTestSubviewSettings (*)(::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>)>(&::MA::Flora::InstanceOcclusionTestSubviewSettings::FromSpan)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814cddd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceOcclusionTestSubviewSettings>(),
                        {"FromSpan", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::InstanceOcclusionTestSubviewSettings MA::Flora::InstanceOcclusionTestSubviewSettings::FromSpan(::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>  subviewOcclusionTests)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceOcclusionTestSubviewSettings>(),
                        {"FromSpan", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::InstanceOcclusionTestSubviewSettings>(nullptr, ___internal_method, subviewOcclusionTests);
}
// Ctor Parameters [CppParam { name: "testCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "occluderSubviewIndices", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "occluderSubviewMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingSplitIndices", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingSplitMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceOcclusionTestSubviewSettings::InstanceOcclusionTestSubviewSettings(int32_t  testCount, int32_t  occluderSubviewIndices, int32_t  occluderSubviewMask, int32_t  cullingSplitIndices, int32_t  cullingSplitMask) noexcept  {
this->testCount = testCount;
this->occluderSubviewIndices = occluderSubviewIndices;
this->occluderSubviewMask = occluderSubviewMask;
this->cullingSplitIndices = cullingSplitIndices;
this->cullingSplitMask = cullingSplitMask;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceOcclusionTestSubviewSettings::InstanceOcclusionTestSubviewSettings()   {
}
