#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemsImplementation/SubsystemProvider_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemProvider_def.hpp"
CORDL_MODULE_EXPORT(SubsystemProvider_1)
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
template<typename TSubsystem>
class SubsystemProvider_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::SubsystemsImplementation::SubsystemProvider_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::SubsystemsImplementation::SubsystemProvider_1, "UnityEngine.SubsystemsImplementation", "SubsystemProvider`1");
// Dependencies UnityEngine.SubsystemsImplementation.SubsystemProvider
namespace UnityEngine::SubsystemsImplementation {
// cpp template
template<typename TSubsystem>
// Is value type: false
// CS Name: UnityEngine.SubsystemsImplementation.SubsystemProvider`1<TSubsystem>
class CORDL_TYPE SubsystemProvider_1 : public ::UnityEngine::SubsystemsImplementation::SubsystemProvider {
public:
// Declarations
/// @brief Method Destroy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

static inline ::UnityEngine::SubsystemsImplementation::SubsystemProvider_1<TSubsystem>* New_ctor() ;

/// @brief Method Stop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Stop() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubsystemProvider_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubsystemProvider_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubsystemProvider_1(SubsystemProvider_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemProvider_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubsystemProvider_1(SubsystemProvider_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21255};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::SubsystemsImplementation
