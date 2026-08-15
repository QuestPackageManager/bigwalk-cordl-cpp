#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGlobals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TVEGlobals)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEGlobals;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEGlobals*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEGlobals*, "TheVisualEngine", "TVEGlobals");
// Dependencies System.Object
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEGlobals
class CORDL_TYPE TVEGlobals : public ::System::Object {
public:
// Declarations
/// @brief Field searchCopyPaste, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_searchCopyPaste, put=setStaticF_searchCopyPaste)) ::StringW  searchCopyPaste;

/// @brief Field searchElement, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_searchElement, put=setStaticF_searchElement)) ::StringW  searchElement;

/// @brief Field searchManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_searchManager, put=setStaticF_searchManager)) ::StringW  searchManager;

/// @brief Field searchMaterial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_searchMaterial, put=setStaticF_searchMaterial)) ::StringW  searchMaterial;

/// @brief Field settingPresetPaths, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_settingPresetPaths, put=setStaticF_settingPresetPaths)) ::System::Collections::Generic::List_1<::StringW>*  settingPresetPaths;

/// @brief Field settingPresetsEnum, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_settingPresetsEnum, put=setStaticF_settingPresetsEnum)) ::ArrayW<::StringW>  settingPresetsEnum;

static inline ::TheVisualEngine::TVEGlobals* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_searchCopyPaste() ;

static inline ::StringW getStaticF_searchElement() ;

static inline ::StringW getStaticF_searchManager() ;

static inline ::StringW getStaticF_searchMaterial() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_settingPresetPaths() ;

static inline ::ArrayW<::StringW> getStaticF_settingPresetsEnum() ;

static inline void setStaticF_searchCopyPaste(::StringW  value) ;

static inline void setStaticF_searchElement(::StringW  value) ;

static inline void setStaticF_searchManager(::StringW  value) ;

static inline void setStaticF_searchMaterial(::StringW  value) ;

static inline void setStaticF_settingPresetPaths(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF_settingPresetsEnum(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEGlobals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEGlobals", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEGlobals(TVEGlobals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEGlobals", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEGlobals(TVEGlobals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19579};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TheVisualEngine::TVEGlobals) == 0x10, "Size mismatch!");

} // namespace end def TheVisualEngine
