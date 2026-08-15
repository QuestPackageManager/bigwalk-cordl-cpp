#pragma once
// IWYU pragma private; include "System/Xml/Linq/XNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XNode)
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Linq {
struct LoadOptions;
}
namespace System::Xml::Linq {
struct SaveOptions;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml::Linq {
class XNode;
}
// Write type traits
MARK_REF_T(::System::Xml::Linq::XNode*);
DEFINE_IL2CPP_CLASS(::System::Xml::Linq::XNode*, "System.Xml.Linq", "XNode");
// Dependencies System.Xml.Linq.XObject
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XNode
class CORDL_TYPE XNode : public ::System::Xml::Linq::XObject {
public:
// Declarations
/// @brief Field next, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::System::Xml::Linq::XNode*  next;

/// @brief Method AppendText, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void AppendText(::System::Text::StringBuilder*  sb) ;

/// @brief Method CloneNode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Xml::Linq::XNode* CloneNode() ;

/// @brief Method GetXmlReaderSettings, addr 0x181c362a0, size 0x70, virtual false, abstract: false, final false
static inline ::System::Xml::XmlReaderSettings* GetXmlReaderSettings(::System::Xml::Linq::LoadOptions  o) ;

/// @brief Method GetXmlString, addr 0x181c36310, size 0x280, virtual false, abstract: false, final false
inline ::StringW GetXmlString(::System::Xml::Linq::SaveOptions  o) ;

static inline ::System::Xml::Linq::XNode* New_ctor() ;

/// @brief Method Remove, addr 0x181c36590, size 0x30, virtual false, abstract: false, final false
inline void Remove() ;

/// @brief Method ToString, addr 0x181c365c0, size 0x140, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteTo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void WriteTo(::System::Xml::XmlWriter*  writer) ;

constexpr ::System::Xml::Linq::XNode* const& __cordl_internal_get_next() const;

constexpr ::System::Xml::Linq::XNode*& __cordl_internal_get_next() ;

constexpr void __cordl_internal_set_next(::System::Xml::Linq::XNode*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XNode(XNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XNode(XNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20790};

/// @brief Field next, offset: 0x20, size: 0x8, def value: None
 ::System::Xml::Linq::XNode*  ___next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XNode, ___next) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Linq::XNode) == 0x28, "Size mismatch!");

} // namespace end def System::Xml::Linq
