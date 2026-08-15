#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/SetOfNamed_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SetOfNamed_1)
namespace PlayEveryWare::Common {
template<typename T>
class Named_1;
}
namespace PlayEveryWare::Common {
template<typename TValueType>
class ValueChangedEventArgs_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::Common {
template<typename T>
class SetOfNamed_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::PlayEveryWare::Common::SetOfNamed_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayEveryWare::Common::SetOfNamed_1, "PlayEveryWare.Common", "SetOfNamed`1");
// Dependencies System.Collections.Generic.List`1<T>
namespace PlayEveryWare::Common {
// cpp template
template<typename T>
// Is value type: false
// CS Name: PlayEveryWare.Common.SetOfNamed`1<T>
class CORDL_TYPE SetOfNamed_1 : public ::System::Collections::Generic::List_1<::PlayEveryWare::Common::Named_1<T>*> {
public:
// Declarations
/// @brief Field _defaultNamePattern, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultNamePattern, put=__cordl_internal_set__defaultNamePattern)) ::StringW  _defaultNamePattern;

/// @brief Field _existingNames, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__existingNames, put=__cordl_internal_set__existingNames)) ::System::Collections::Generic::HashSet_1<::StringW>*  _existingNames;

/// @brief Field _removePredicate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__removePredicate, put=__cordl_internal_set__removePredicate)) ::System::Func_2<T,bool>*  _removePredicate;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Add(T  value) ;

/// @brief Method ContainsName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ContainsName(::StringW  name) ;

/// @brief Method ContainsValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ContainsValue(T  item) ;

/// @brief Method GetNewItemName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW GetNewItemName() ;

static inline ::PlayEveryWare::Common::SetOfNamed_1<T>* New_ctor(::StringW  defaultNamePattern) ;

/// @brief Method OnItemNameChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnItemNameChanged(::System::Object*  sender, ::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*  e) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(::PlayEveryWare::Common::Named_1<T>*  item) ;

/// @brief Method SetRemovePredicate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetRemovePredicate(::System::Func_2<T,bool>*  removePredicate) ;

constexpr ::StringW const& __cordl_internal_get__defaultNamePattern() const;

constexpr ::StringW& __cordl_internal_get__defaultNamePattern() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__existingNames() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__existingNames() ;

constexpr ::System::Func_2<T,bool>* const& __cordl_internal_get__removePredicate() const;

constexpr ::System::Func_2<T,bool>*& __cordl_internal_get__removePredicate() ;

constexpr void __cordl_internal_set__defaultNamePattern(::StringW  value) ;

constexpr void __cordl_internal_set__existingNames(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__removePredicate(::System::Func_2<T,bool>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  defaultNamePattern) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetOfNamed_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetOfNamed_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetOfNamed_1(SetOfNamed_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetOfNamed_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetOfNamed_1(SetOfNamed_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18795};

/// @brief Field _defaultNamePattern, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____defaultNamePattern;

/// @brief Field _removePredicate, offset: 0x30, size: 0x8, def value: None
 ::System::Func_2<T,bool>*  ____removePredicate;

/// @brief Field _existingNames, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ____existingNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::Common
