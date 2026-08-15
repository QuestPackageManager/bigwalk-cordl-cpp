#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ParameterOverride_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterOverride_1)
namespace UnityEngine::Rendering::PostProcessing {
class ParameterOverride;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
template<typename T>
class ParameterOverride_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Rendering::PostProcessing::ParameterOverride_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Rendering::PostProcessing::ParameterOverride_1, "UnityEngine.Rendering.PostProcessing", "ParameterOverride`1");
// Dependencies UnityEngine.Rendering.PostProcessing.ParameterOverride
namespace UnityEngine::Rendering::PostProcessing {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>
class CORDL_TYPE ParameterOverride_1 : public ::UnityEngine::Rendering::PostProcessing::ParameterOverride {
public:
// Declarations
/// @brief Field value, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) T  value;

/// @brief Method GetHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHash() ;

/// @brief Method Interp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Interp(::UnityEngine::Rendering::PostProcessing::ParameterOverride*  from, ::UnityEngine::Rendering::PostProcessing::ParameterOverride*  to, float_t  t) ;

/// @brief Method Interp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Interp(T  from, T  to, float_t  t) ;

static inline ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>* New_ctor() ;

static inline ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>* New_ctor(T  value) ;

static inline ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>* New_ctor(T  value, bool  overrideState) ;

/// @brief Method Override, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Override(T  x) ;

/// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetValue(::UnityEngine::Rendering::PostProcessing::ParameterOverride*  parameter) ;

constexpr T const& __cordl_internal_get_value() const;

constexpr T& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_value(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  value, bool  overrideState) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T op_Implicit_T(::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*  prop) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParameterOverride_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParameterOverride_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParameterOverride_1(ParameterOverride_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParameterOverride_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParameterOverride_1(ParameterOverride_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18607};

/// @brief Field value, offset: 0x18, size: 0x8, def value: None
 T  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering::PostProcessing
