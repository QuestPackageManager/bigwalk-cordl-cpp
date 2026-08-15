#pragma once
// IWYU pragma private; include "Dissonance/DissonanceRootPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DissonanceRootPath)
// Forward declare root types
namespace Dissonance {
class DissonanceRootPath;
}
// Write type traits
MARK_REF_T(::Dissonance::DissonanceRootPath*);
DEFINE_IL2CPP_CLASS(::Dissonance::DissonanceRootPath*, "Dissonance", "DissonanceRootPath");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.DissonanceRootPath
class CORDL_TYPE DissonanceRootPath : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr DissonanceRootPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DissonanceRootPath", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DissonanceRootPath(DissonanceRootPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DissonanceRootPath", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DissonanceRootPath(DissonanceRootPath const& ) = delete;

/// @brief Field BasePath offset 0xffffffff size 0x8
static constexpr ::ConstString  BasePath{u"Assets/Plugins/Dissonance"};

/// @brief Field BaseResourcePath offset 0xffffffff size 0x8
static constexpr ::ConstString  BaseResourcePath{u"Assets/Plugins/Dissonance/Resources"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16834};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::DissonanceRootPath) == 0x10, "Size mismatch!");

} // namespace end def Dissonance
