#pragma once
// IWYU pragma private; include "System/Xml/XmlText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharacterData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XmlText)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlText;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlText*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlText*, "System.Xml", "XmlText");
// Dependencies System.Xml.XmlCharacterData
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlText
class CORDL_TYPE XmlText : public ::System::Xml::XmlCharacterData {
public:
// Declarations
 __declspec(property(get=get_IsText)) bool  IsText;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_ParentNode)) ::System::Xml::XmlNode*  ParentNode;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

/// @brief Method CloneNode, addr 0x181d256d0, size 0x60, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* CloneNode(bool  deep) ;

static inline ::System::Xml::XmlText* New_ctor(::StringW  strData) ;

static inline ::System::Xml::XmlText* New_ctor(::StringW  strData, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method WriteContentTo, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void WriteContentTo(::System::Xml::XmlWriter*  w) ;

/// @brief Method WriteTo, addr 0x181d254e0, size 0x40, virtual true, abstract: false, final false
inline void WriteTo(::System::Xml::XmlWriter*  w) ;

/// @brief Method .ctor, addr 0x181d25740, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  strData) ;

/// @brief Method .ctor, addr 0x181d25730, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  strData, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method get_IsText, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_IsText() ;

/// @brief Method get_LocalName, addr 0x181d25750, size 0x30, virtual true, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Name, addr 0x181d25750, size 0x30, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NodeType, addr 0x1802ee400, size 0x10, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_ParentNode, addr 0x181cff7c0, size 0xa0, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* get_ParentNode() ;

/// @brief Method get_Value, addr 0x181cff8c0, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method set_Value, addr 0x181d25780, size 0x90, virtual true, abstract: false, final false
inline void set_Value(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlText", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlText(XmlText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlText", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlText(XmlText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9779};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::XmlText) == 0x28, "Size mismatch!");

} // namespace end def System::Xml
