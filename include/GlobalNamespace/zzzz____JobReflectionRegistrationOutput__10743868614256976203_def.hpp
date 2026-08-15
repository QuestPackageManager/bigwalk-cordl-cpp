#pragma once
// IWYU pragma private; include "GlobalNamespace/__JobReflectionRegistrationOutput__10743868614256976203.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(__JobReflectionRegistrationOutput__10743868614256976203)
// Forward declare root types
namespace GlobalNamespace {
class __JobReflectionRegistrationOutput__10743868614256976203;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::__JobReflectionRegistrationOutput__10743868614256976203*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::__JobReflectionRegistrationOutput__10743868614256976203*, "", "__JobReflectionRegistrationOutput__10743868614256976203");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: __JobReflectionRegistrationOutput__10743868614256976203
class CORDL_TYPE __JobReflectionRegistrationOutput__10743868614256976203 : public ::System::Object {
public:
// Declarations
/// @brief Method CreateJobReflectionData, addr 0x181513520, size 0x300, virtual false, abstract: false, final false
static inline void CreateJobReflectionData() ;

/// @brief Method EarlyInit, addr 0x181513820, size 0x4d0, virtual false, abstract: false, final false
static inline void EarlyInit() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __JobReflectionRegistrationOutput__10743868614256976203() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__JobReflectionRegistrationOutput__10743868614256976203", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__JobReflectionRegistrationOutput__10743868614256976203(__JobReflectionRegistrationOutput__10743868614256976203 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__JobReflectionRegistrationOutput__10743868614256976203", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__JobReflectionRegistrationOutput__10743868614256976203(__JobReflectionRegistrationOutput__10743868614256976203 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13418};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::__JobReflectionRegistrationOutput__10743868614256976203) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
