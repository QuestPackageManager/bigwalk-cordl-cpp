#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Input.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Input)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::Windows {
class Input;
}
// Write type traits
MARK_REF_T(::UnityEngine::Windows::Input*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Input*, "UnityEngine.Windows", "Input");
// Dependencies System.Object
namespace UnityEngine::Windows {
// Is value type: false
// CS Name: UnityEngine.Windows.Input
class CORDL_TYPE Input : public ::System::Object {
public:
// Declarations
/// @brief Method ForwardRawInput, addr 0x18227eeb0, size 0x60, virtual false, abstract: false, final false
static inline void ForwardRawInput(::System::IntPtr  rawInputHeaderIndices, ::System::IntPtr  rawInputDataIndices, uint32_t  indicesCount, ::System::IntPtr  rawInputData, uint32_t  rawInputDataSize) ;

/// @brief Method ForwardRawInput, addr 0x18227eeb0, size 0x60, virtual false, abstract: false, final false
static inline void ForwardRawInput(uint32_t*  rawInputHeaderIndices, uint32_t*  rawInputDataIndices, uint32_t  indicesCount, uint8_t*  rawInputData, uint32_t  rawInputDataSize) ;

/// @brief Method ForwardRawInputImpl, addr 0x18227eea0, size 0x10, virtual false, abstract: false, final false
static inline void ForwardRawInputImpl(uint32_t*  rawInputHeaderIndices, uint32_t*  rawInputDataIndices, uint32_t  indicesCount, uint8_t*  rawInputData, uint32_t  rawInputDataSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Input() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Input", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Input(Input && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Input", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Input(Input const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10794};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::Input) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Windows
