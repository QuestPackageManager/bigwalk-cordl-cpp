#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/HaltonSeq.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HaltonSeq)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class HaltonSeq;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::HaltonSeq*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::HaltonSeq*, "UnityEngine.Rendering.PostProcessing", "HaltonSeq");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.HaltonSeq
class CORDL_TYPE HaltonSeq : public ::System::Object {
public:
// Declarations
/// @brief Method Get, addr 0x181fc0000, size 0x60, virtual false, abstract: false, final false
static inline float_t Get(int32_t  index, int32_t  radix) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HaltonSeq() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HaltonSeq", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HaltonSeq(HaltonSeq && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HaltonSeq", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HaltonSeq(HaltonSeq const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18654};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::HaltonSeq) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
