#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/LogHistogram.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LogHistogram)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class LogHistogram;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::LogHistogram*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::LogHistogram*, "UnityEngine.Rendering.PostProcessing", "LogHistogram");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.LogHistogram
class CORDL_TYPE LogHistogram : public ::System::Object {
public:
// Declarations
/// @brief Field <data>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__data_k__BackingField, put=__cordl_internal_set__data_k__BackingField)) ::UnityEngine::ComputeBuffer*  _data_k__BackingField;

 __declspec(property(get=get_data, put=set_data)) ::UnityEngine::ComputeBuffer*  data;

/// @brief Method Generate, addr 0x181fc08f0, size 0x2f0, virtual false, abstract: false, final false
inline void Generate(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method GetHistogramScaleOffsetRes, addr 0x181fc0be0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetHistogramScaleOffsetRes(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::LogHistogram* New_ctor() ;

/// @brief Method Release, addr 0x181fc0c20, size 0x40, virtual false, abstract: false, final false
inline void Release() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get__data_k__BackingField() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get__data_k__BackingField() ;

constexpr void __cordl_internal_set__data_k__BackingField(::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_data, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::ComputeBuffer* get_data() ;

/// @brief Method set_data, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_data(::UnityEngine::ComputeBuffer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogHistogram() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogHistogram", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LogHistogram(LogHistogram && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogHistogram", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogHistogram(LogHistogram const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18655};

/// @brief Field k_Bins offset 0xffffffff size 0x4
static constexpr int32_t  k_Bins{static_cast<int32_t>(0x80)};

/// @brief Field rangeMax offset 0xffffffff size 0x4
static constexpr int32_t  rangeMax{static_cast<int32_t>(0x9)};

/// @brief Field rangeMin offset 0xffffffff size 0x4
static constexpr int32_t  rangeMin{static_cast<int32_t>(0xfffffff7)};

/// @brief Field <data>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ____data_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::LogHistogram, ____data_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::LogHistogram) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
