#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemsImplementation/SubsystemDescriptorWithProvider_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemDescriptorWithProvider_def.hpp"
CORDL_MODULE_EXPORT(SubsystemDescriptorWithProvider_2)
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
template<typename TSubsystem,typename TProvider>
class SubsystemDescriptorWithProvider_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider_2, "UnityEngine.SubsystemsImplementation", "SubsystemDescriptorWithProvider`2");
// Dependencies UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
namespace UnityEngine::SubsystemsImplementation {
// cpp template
template<typename TSubsystem,typename TProvider>
// Is value type: false
// CS Name: UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<TSubsystem,TProvider>
class CORDL_TYPE SubsystemDescriptorWithProvider_2 : public ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider {
public:
// Declarations
static inline ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider_2<TSubsystem,TProvider>* New_ctor() ;

/// @brief Method ThrowIfInvalid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void ThrowIfInvalid() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubsystemDescriptorWithProvider_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorWithProvider_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubsystemDescriptorWithProvider_2(SubsystemDescriptorWithProvider_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorWithProvider_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubsystemDescriptorWithProvider_2(SubsystemDescriptorWithProvider_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21253};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::SubsystemsImplementation
