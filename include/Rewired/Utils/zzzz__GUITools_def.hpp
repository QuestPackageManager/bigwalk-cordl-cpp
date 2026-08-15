#pragma once
// IWYU pragma private; include "Rewired/Utils/GUITools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GUITools)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
class GUIContent;
}
// Forward declare root types
namespace Rewired::Utils {
class GUITools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::GUITools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::GUITools*, "Rewired.Utils", "GUITools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.GUITools
class CORDL_TYPE GUITools : public ::System::Object {
public:
// Declarations
/// @brief Method ToGUIContentArray, addr 0x181903ad0, size 0xd0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::GUIContent*> ToGUIContentArray(::ArrayW<::StringW>  items) ;

/// @brief Method ToGUIContentArray, addr 0x1819038f0, size 0x1e0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::GUIContent*> ToGUIContentArray(::System::Collections::Generic::IList_1<::StringW>*  items) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUITools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUITools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUITools(GUITools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUITools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUITools(GUITools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2918};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::GUITools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
