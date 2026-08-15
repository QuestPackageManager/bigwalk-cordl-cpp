#pragma once
// IWYU pragma private; include "Rewired/Data/ControllerTemplateElementIdentifier_Editor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementIdentifier_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ControllerTemplateElementIdentifier_Editor)
namespace Rewired::Interfaces {
class IControllerElementIdentifierCommon_Internal;
}
namespace Rewired::Interfaces {
class IControllerTemplateElementIdentifier_Editor;
}
namespace Rewired::Interfaces {
class IControllerTemplateElementIdentifier;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
class ControllerTemplateElementIdentifier;
}
namespace Rewired {
struct ControllerTemplateElementType;
}
// Forward declare root types
namespace Rewired::Data {
class ControllerTemplateElementIdentifier_Editor;
}
// Write type traits
MARK_REF_T(::Rewired::Data::ControllerTemplateElementIdentifier_Editor*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::ControllerTemplateElementIdentifier_Editor*, "Rewired.Data", "ControllerTemplateElementIdentifier_Editor");
// Dependencies Rewired.ControllerElementType, Rewired.ControllerTemplateElementIdentifier
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ControllerTemplateElementIdentifier_Editor
class CORDL_TYPE ControllerTemplateElementIdentifier_Editor : public ::Rewired::ControllerTemplateElementIdentifier {
public:
// Declarations
 __declspec(property(get=Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_get_alternateScriptingName)) ::StringW  Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_alternateScriptingName;

 __declspec(property(get=Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_get_scriptingName)) ::StringW  Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_scriptingName;

/// @brief Field _alternateScriptingName, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__alternateScriptingName, put=__cordl_internal_set__alternateScriptingName)) ::StringW  _alternateScriptingName;

/// @brief Field _editorElementTypeOverride, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__editorElementTypeOverride, put=__cordl_internal_set__editorElementTypeOverride)) ::Rewired::ControllerElementType  _editorElementTypeOverride;

/// @brief Field _excludeFromExport, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__excludeFromExport, put=__cordl_internal_set__excludeFromExport)) bool  _excludeFromExport;

/// @brief Field _scriptingName, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__scriptingName, put=__cordl_internal_set__scriptingName)) ::StringW  _scriptingName;

/// @brief Field _useEditorElementTypeOverride, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__useEditorElementTypeOverride, put=__cordl_internal_set__useEditorElementTypeOverride)) bool  _useEditorElementTypeOverride;

 __declspec(property(get=get_alternateScriptingName, put=set_alternateScriptingName)) ::StringW  alternateScriptingName;

 __declspec(property(get=get_editorElementTypeOverride)) ::Rewired::ControllerElementType  editorElementTypeOverride;

 __declspec(property(get=get_effectiveElementType)) ::Rewired::ControllerTemplateElementType  effectiveElementType;

 __declspec(property(get=get_excludeFromExport)) bool  excludeFromExport;

 __declspec(property(get=get_scriptingName, put=set_scriptingName)) ::StringW  scriptingName;

 __declspec(property(get=get_useEditorElementTypeOverride)) bool  useEditorElementTypeOverride;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr operator  ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerTemplateElementIdentifier"
constexpr operator  ::Rewired::Interfaces::IControllerTemplateElementIdentifier*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor"
constexpr operator  ::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor*() noexcept;

/// @brief Method Clone, addr 0x1818a2090, size 0xa0, virtual true, abstract: false, final false
inline ::Rewired::ControllerTemplateElementIdentifier* Clone() ;

static inline ::Rewired::Data::ControllerTemplateElementIdentifier_Editor* New_ctor() ;

static inline ::Rewired::Data::ControllerTemplateElementIdentifier_Editor* New_ctor(::Rewired::Data::ControllerTemplateElementIdentifier_Editor*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Rewired.Interfaces.IControllerTemplateElementIdentifier_Editor.get_alternateScriptingName, addr 0x180312ea0, size 0x10, virtual true, abstract: false, final true
inline ::StringW Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_get_alternateScriptingName() ;

/// @brief Method Rewired.Interfaces.IControllerTemplateElementIdentifier_Editor.get_scriptingName, addr 0x1802e5800, size 0x10, virtual true, abstract: false, final true
inline ::StringW Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_get_scriptingName() ;

constexpr ::StringW const& __cordl_internal_get__alternateScriptingName() const;

constexpr ::StringW& __cordl_internal_get__alternateScriptingName() ;

constexpr ::Rewired::ControllerElementType const& __cordl_internal_get__editorElementTypeOverride() const;

constexpr ::Rewired::ControllerElementType& __cordl_internal_get__editorElementTypeOverride() ;

constexpr bool const& __cordl_internal_get__excludeFromExport() const;

constexpr bool& __cordl_internal_get__excludeFromExport() ;

constexpr ::StringW const& __cordl_internal_get__scriptingName() const;

constexpr ::StringW& __cordl_internal_get__scriptingName() ;

constexpr bool const& __cordl_internal_get__useEditorElementTypeOverride() const;

constexpr bool& __cordl_internal_get__useEditorElementTypeOverride() ;

constexpr void __cordl_internal_set__alternateScriptingName(::StringW  value) ;

constexpr void __cordl_internal_set__editorElementTypeOverride(::Rewired::ControllerElementType  value) ;

constexpr void __cordl_internal_set__excludeFromExport(bool  value) ;

constexpr void __cordl_internal_set__scriptingName(::StringW  value) ;

constexpr void __cordl_internal_set__useEditorElementTypeOverride(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818a2130, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::ControllerTemplateElementIdentifier_Editor*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_alternateScriptingName, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_alternateScriptingName() ;

/// @brief Method get_editorElementTypeOverride, addr 0x181561f30, size 0x10, virtual true, abstract: false, final false
inline ::Rewired::ControllerElementType get_editorElementTypeOverride() ;

/// @brief Method get_effectiveElementType, addr 0x1818a21c0, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::ControllerTemplateElementType get_effectiveElementType() ;

/// @brief Method get_excludeFromExport, addr 0x180310e70, size 0x10, virtual false, abstract: false, final false
inline bool get_excludeFromExport() ;

/// @brief Method get_scriptingName, addr 0x1802e5800, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_scriptingName() ;

/// @brief Method get_useEditorElementTypeOverride, addr 0x180310e80, size 0x10, virtual true, abstract: false, final false
inline bool get_useEditorElementTypeOverride() ;

/// @brief Convert to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* i___Rewired__Interfaces__IControllerElementIdentifierCommon_Internal() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IControllerTemplateElementIdentifier"
constexpr ::Rewired::Interfaces::IControllerTemplateElementIdentifier* i___Rewired__Interfaces__IControllerTemplateElementIdentifier() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor"
constexpr ::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor* i___Rewired__Interfaces__IControllerTemplateElementIdentifier_Editor() noexcept;

/// @brief Method set_alternateScriptingName, addr 0x1803e1880, size 0x20, virtual false, abstract: false, final false
inline void set_alternateScriptingName(::StringW  value) ;

/// @brief Method set_scriptingName, addr 0x180374490, size 0x20, virtual false, abstract: false, final false
inline void set_scriptingName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateElementIdentifier_Editor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateElementIdentifier_Editor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTemplateElementIdentifier_Editor(ControllerTemplateElementIdentifier_Editor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateElementIdentifier_Editor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTemplateElementIdentifier_Editor(ControllerTemplateElementIdentifier_Editor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2414};

/// @brief Field _scriptingName, offset: 0x88, size: 0x8, def value: None
 ::StringW  ____scriptingName;

/// @brief Field _alternateScriptingName, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____alternateScriptingName;

/// @brief Field _excludeFromExport, offset: 0x98, size: 0x1, def value: None
 bool  ____excludeFromExport;

/// @brief Field _useEditorElementTypeOverride, offset: 0x99, size: 0x1, def value: None
 bool  ____useEditorElementTypeOverride;

/// @brief Field _editorElementTypeOverride, offset: 0x9c, size: 0x4, def value: None
 ::Rewired::ControllerElementType  ____editorElementTypeOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ControllerTemplateElementIdentifier_Editor, ____scriptingName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerTemplateElementIdentifier_Editor, ____alternateScriptingName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerTemplateElementIdentifier_Editor, ____excludeFromExport) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerTemplateElementIdentifier_Editor, ____useEditorElementTypeOverride) == 0x99, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerTemplateElementIdentifier_Editor, ____editorElementTypeOverride) == 0x9c, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ControllerTemplateElementIdentifier_Editor) == 0xa0, "Size mismatch!");

} // namespace end def Rewired::Data
