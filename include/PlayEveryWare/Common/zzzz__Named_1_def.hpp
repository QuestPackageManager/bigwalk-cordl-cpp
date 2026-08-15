#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/Named_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Named_1)
namespace PlayEveryWare::Common {
template<typename TValueType>
class ValueChangedEventArgs_1;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
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
namespace PlayEveryWare::Common {
template<typename T>
class Named_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::PlayEveryWare::Common::Named_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayEveryWare::Common::Named_1, "PlayEveryWare.Common", "Named`1");
// Dependencies System.Object
namespace PlayEveryWare::Common {
// cpp template
template<typename T>
// Is value type: false
// CS Name: PlayEveryWare.Common.Named`1<T>
class CORDL_TYPE Named_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field NameChanged, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_NameChanged, put=__cordl_internal_set_NameChanged)) ::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>*  NameChanged;

/// @brief Field Value, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) T  Value;

/// @brief Field <Name>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Convert operator to "::System::IComparable_1<::PlayEveryWare::Common::Named_1<T>*>"
constexpr operator  ::System::IComparable_1<::PlayEveryWare::Common::Named_1<T>*>*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::PlayEveryWare::Common::Named_1<T>*>"
constexpr operator  ::System::IEquatable_1<::PlayEveryWare::Common::Named_1<T>*>*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<T>"
constexpr operator  ::System::IEquatable_1<T>*() noexcept;

/// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t CompareTo(::PlayEveryWare::Common::Named_1<T>*  other) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(::PlayEveryWare::Common::Named_1<T>*  other) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(T  other) ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::PlayEveryWare::Common::Named_1<T>* New_ctor(::StringW  name, T  value) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TrySetName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetName(::StringW  newName, bool  notify) ;

constexpr ::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>* const& __cordl_internal_get_NameChanged() const;

constexpr ::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>*& __cordl_internal_get_NameChanged() ;

constexpr T const& __cordl_internal_get_Value() const;

constexpr T& __cordl_internal_get_Value() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set_NameChanged(::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_Value(T  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, T  value) ;

/// @brief Method add_NameChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_NameChanged(::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>*  value) ;

/// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Convert to "::System::IComparable_1<::PlayEveryWare::Common::Named_1<T>*>"
constexpr ::System::IComparable_1<::PlayEveryWare::Common::Named_1<T>*>* i___System__IComparable_1___PlayEveryWare__Common__Named_1_T___() noexcept;

/// @brief Convert to "::System::IEquatable_1<T>"
constexpr ::System::IEquatable_1<T>* i___System__IEquatable_1_T_() noexcept;

/// @brief Convert to "::System::IEquatable_1<::PlayEveryWare::Common::Named_1<T>*>"
constexpr ::System::IEquatable_1<::PlayEveryWare::Common::Named_1<T>*>* i___System__IEquatable_1___PlayEveryWare__Common__Named_1_T___() noexcept;

/// @brief Method remove_NameChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_NameChanged(::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>*  value) ;

/// @brief Method set_Name, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Named_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Named_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Named_1(Named_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Named_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Named_1(Named_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18794};

/// @brief Field NameChanged, offset: 0x10, size: 0x8, def value: None
 ::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>*  ___NameChanged;

/// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// @brief Field Value, offset: 0x20, size: 0x8, def value: None
 T  ___Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::Common
