#pragma once
// IWYU pragma private; include "System/Resources/ResourceSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ResourceSet)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Resources {
class IResourceReader;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Resources {
class ResourceSet;
}
// Write type traits
MARK_REF_T(::System::Resources::ResourceSet*);
DEFINE_IL2CPP_CLASS(::System::Resources::ResourceSet*, "System.Resources", "ResourceSet");
// Dependencies System.Object
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.ResourceSet
class CORDL_TYPE ResourceSet : public ::System::Object {
public:
// Declarations
/// @brief Field Reader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Reader, put=__cordl_internal_set_Reader)) ::System::Resources::IResourceReader*  Reader;

/// @brief Field Table, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Table, put=__cordl_internal_set_Table)) ::System::Collections::Hashtable*  Table;

/// @brief Field _caseInsensitiveTable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__caseInsensitiveTable, put=__cordl_internal_set__caseInsensitiveTable)) ::System::Collections::Hashtable*  _caseInsensitiveTable;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CommonInit, addr 0x18166abb0, size 0x40, virtual false, abstract: false, final false
inline void CommonInit() ;

/// @brief Method Dispose, addr 0x18166ac70, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x18166abf0, size 0x80, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetCaseInsensitiveObjectInternal, addr 0x18166ac90, size 0x2d0, virtual false, abstract: false, final false
inline ::System::Object* GetCaseInsensitiveObjectInternal(::StringW  name) ;

/// @brief Method GetEnumerator, addr 0x18166aff0, size 0x10, virtual true, abstract: false, final false
inline ::System::Collections::IDictionaryEnumerator* GetEnumerator() ;

/// @brief Method GetEnumeratorHelper, addr 0x18166af60, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IDictionaryEnumerator* GetEnumeratorHelper() ;

/// @brief Method GetObject, addr 0x18166b000, size 0xa0, virtual true, abstract: false, final false
inline ::System::Object* GetObject(::StringW  name) ;

/// @brief Method GetObject, addr 0x18166b0a0, size 0xc0, virtual true, abstract: false, final false
inline ::System::Object* GetObject(::StringW  name, bool  ignoreCase) ;

/// @brief Method GetObjectInternal, addr 0x18166b000, size 0xa0, virtual false, abstract: false, final false
inline ::System::Object* GetObjectInternal(::StringW  name) ;

/// @brief Method GetString, addr 0x18166b160, size 0x140, virtual true, abstract: false, final false
inline ::StringW GetString(::StringW  name) ;

/// @brief Method GetString, addr 0x18166b2a0, size 0x220, virtual true, abstract: false, final false
inline ::StringW GetString(::StringW  name, bool  ignoreCase) ;

static inline ::System::Resources::ResourceSet* New_ctor() ;

static inline ::System::Resources::ResourceSet* New_ctor(bool  junk) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x18166aff0, size 0x10, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Resources::IResourceReader* const& __cordl_internal_get_Reader() const;

constexpr ::System::Resources::IResourceReader*& __cordl_internal_get_Reader() ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_Table() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get_Table() ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__caseInsensitiveTable() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get__caseInsensitiveTable() ;

constexpr void __cordl_internal_set_Reader(::System::Resources::IResourceReader*  value) ;

constexpr void __cordl_internal_set_Table(::System::Collections::Hashtable*  value) ;

constexpr void __cordl_internal_set__caseInsensitiveTable(::System::Collections::Hashtable*  value) ;

/// @brief Method .ctor, addr 0x18166abb0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  junk) ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ResourceSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ResourceSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResourceSet(ResourceSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResourceSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResourceSet(ResourceSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1226};

/// @brief Field Reader, offset: 0x10, size: 0x8, def value: None
 ::System::Resources::IResourceReader*  ___Reader;

/// @brief Field Table, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ___Table;

/// @brief Field _caseInsensitiveTable, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ____caseInsensitiveTable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::ResourceSet, ___Reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceSet, ___Table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceSet, ____caseInsensitiveTable) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Resources::ResourceSet) == 0x28, "Size mismatch!");

} // namespace end def System::Resources
