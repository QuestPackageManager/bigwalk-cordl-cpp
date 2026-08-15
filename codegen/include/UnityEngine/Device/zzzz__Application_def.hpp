#pragma once
// IWYU pragma private; include "UnityEngine/Device/Application.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Application)
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace UnityEngine::Device {
class Application;
}
// Write type traits
MARK_REF_T(::UnityEngine::Device::Application*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Device::Application*, "UnityEngine.Device", "Application");
// Dependencies System.Object
namespace UnityEngine::Device {
// Is value type: false
// CS Name: UnityEngine.Device.Application
class CORDL_TYPE Application : public ::System::Object {
public:
// Declarations
/// @brief Method get_systemLanguage, addr 0x18227c220, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::SystemLanguage get_systemLanguage() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Application() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Application(Application && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Application(Application const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11078};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Device::Application) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Device
