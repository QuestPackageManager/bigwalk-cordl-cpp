#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/FastApproximateAntialiasing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FastApproximateAntialiasing)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class FastApproximateAntialiasing;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing*, "UnityEngine.Rendering.PostProcessing", "FastApproximateAntialiasing");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.FastApproximateAntialiasing
class CORDL_TYPE FastApproximateAntialiasing : public ::System::Object {
public:
// Declarations
/// @brief Field fastMode, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_fastMode, put=__cordl_internal_set_fastMode)) bool  fastMode;

/// @brief Field keepAlpha, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_keepAlpha, put=__cordl_internal_set_keepAlpha)) bool  keepAlpha;

static inline ::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing* New_ctor() ;

constexpr bool const& __cordl_internal_get_fastMode() const;

constexpr bool& __cordl_internal_get_fastMode() ;

constexpr bool const& __cordl_internal_get_keepAlpha() const;

constexpr bool& __cordl_internal_get_keepAlpha() ;

constexpr void __cordl_internal_set_fastMode(bool  value) ;

constexpr void __cordl_internal_set_keepAlpha(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastApproximateAntialiasing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastApproximateAntialiasing", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FastApproximateAntialiasing(FastApproximateAntialiasing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastApproximateAntialiasing", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastApproximateAntialiasing(FastApproximateAntialiasing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18568};

/// @brief Field fastMode, offset: 0x10, size: 0x1, def value: None
 bool  ___fastMode;

/// @brief Field keepAlpha, offset: 0x11, size: 0x1, def value: None
 bool  ___keepAlpha;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing, ___fastMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing, ___keepAlpha) == 0x11, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
