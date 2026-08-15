#pragma once
// IWYU pragma private; include "Dissonance/SemanticVersion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SemanticVersion)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Dissonance {
class SemanticVersion;
}
// Write type traits
MARK_REF_T(::Dissonance::SemanticVersion*);
DEFINE_IL2CPP_CLASS(::Dissonance::SemanticVersion*, "Dissonance", "SemanticVersion");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.SemanticVersion
class CORDL_TYPE SemanticVersion : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Major)) int32_t  Major;

 __declspec(property(get=get_Minor)) int32_t  Minor;

 __declspec(property(get=get_Patch)) int32_t  Patch;

 __declspec(property(get=get_Tag)) ::StringW  Tag;

/// @brief Field _major, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__major, put=__cordl_internal_set__major)) int32_t  _major;

/// @brief Field _minor, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__minor, put=__cordl_internal_set__minor)) int32_t  _minor;

/// @brief Field _patch, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__patch, put=__cordl_internal_set__patch)) int32_t  _patch;

/// @brief Field _tag, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__tag, put=__cordl_internal_set__tag)) ::StringW  _tag;

/// @brief Convert operator to "::System::IComparable_1<::Dissonance::SemanticVersion*>"
constexpr operator  ::System::IComparable_1<::Dissonance::SemanticVersion*>*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::SemanticVersion*>"
constexpr operator  ::System::IEquatable_1<::Dissonance::SemanticVersion*>*() noexcept;

/// @brief Method CompareTo, addr 0x1805d0a60, size 0x150, virtual true, abstract: false, final true
inline int32_t CompareTo(::Dissonance::SemanticVersion*  other) ;

/// @brief Method Equals, addr 0x1805d0bb0, size 0x200, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805d0db0, size 0x190, virtual true, abstract: false, final true
inline bool Equals(::Dissonance::SemanticVersion*  other) ;

/// @brief Method GetHashCode, addr 0x1805d0f40, size 0x60, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Dissonance::SemanticVersion* New_ctor() ;

static inline ::Dissonance::SemanticVersion* New_ctor(int32_t  major, int32_t  minor, int32_t  patch, ::StringW  tag) ;

/// @brief Method ToString, addr 0x1805d0fa0, size 0x160, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__major() const;

constexpr int32_t& __cordl_internal_get__major() ;

constexpr int32_t const& __cordl_internal_get__minor() const;

constexpr int32_t& __cordl_internal_get__minor() ;

constexpr int32_t const& __cordl_internal_get__patch() const;

constexpr int32_t& __cordl_internal_get__patch() ;

constexpr ::StringW const& __cordl_internal_get__tag() const;

constexpr ::StringW& __cordl_internal_get__tag() ;

constexpr void __cordl_internal_set__major(int32_t  value) ;

constexpr void __cordl_internal_set__minor(int32_t  value) ;

constexpr void __cordl_internal_set__patch(int32_t  value) ;

constexpr void __cordl_internal_set__tag(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1805d1100, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  major, int32_t  minor, int32_t  patch, ::StringW  tag) ;

/// @brief Method get_Major, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Major() ;

/// @brief Method get_Minor, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Minor() ;

/// @brief Method get_Patch, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Patch() ;

/// @brief Method get_Tag, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Tag() ;

/// @brief Convert to "::System::IComparable_1<::Dissonance::SemanticVersion*>"
constexpr ::System::IComparable_1<::Dissonance::SemanticVersion*>* i___System__IComparable_1___Dissonance__SemanticVersion__() noexcept;

/// @brief Convert to "::System::IEquatable_1<::Dissonance::SemanticVersion*>"
constexpr ::System::IEquatable_1<::Dissonance::SemanticVersion*>* i___System__IEquatable_1___Dissonance__SemanticVersion__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SemanticVersion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SemanticVersion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SemanticVersion(SemanticVersion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SemanticVersion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SemanticVersion(SemanticVersion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16825};

/// @brief Field _major, offset: 0x10, size: 0x4, def value: None
 int32_t  ____major;

/// @brief Field _minor, offset: 0x14, size: 0x4, def value: None
 int32_t  ____minor;

/// @brief Field _patch, offset: 0x18, size: 0x4, def value: None
 int32_t  ____patch;

/// @brief Field _tag, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____tag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::SemanticVersion, ____major) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::SemanticVersion, ____minor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Dissonance::SemanticVersion, ____patch) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::SemanticVersion, ____tag) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::SemanticVersion) == 0x28, "Size mismatch!");

} // namespace end def Dissonance
