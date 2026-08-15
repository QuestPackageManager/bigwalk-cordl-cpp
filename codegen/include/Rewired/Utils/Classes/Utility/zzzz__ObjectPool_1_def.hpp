#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/ObjectPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPool_1)
namespace Rewired::Utils::Classes::Utility {
template<typename T>
class IObjectPool_1;
}
namespace Rewired::Utils::Classes::Utility {
class IObjectPool;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
template<typename T>
class ObjectPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Utility::ObjectPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Utility::ObjectPool_1, "Rewired.Utils.Classes.Utility", "ObjectPool`1");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.ObjectPool`1<T>
class CORDL_TYPE ObjectPool_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_InstanceCount)) uint64_t  InstanceCount;

/// @brief Field MExAHlXCUbKDCtDABZucXbYGfgaHA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MExAHlXCUbKDCtDABZucXbYGfgaHA, put=__cordl_internal_set_MExAHlXCUbKDCtDABZucXbYGfgaHA)) uint64_t  MExAHlXCUbKDCtDABZucXbYGfgaHA;

/// @brief Field _createInstanceDelegate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__createInstanceDelegate, put=__cordl_internal_set__createInstanceDelegate)) ::System::Func_1<T>*  _createInstanceDelegate;

/// @brief Field _pool, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__pool, put=__cordl_internal_set__pool)) ::System::Collections::Generic::Queue_1<T>*  _pool;

/// @brief Field _processOnReturnDelegate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__processOnReturnDelegate, put=__cordl_internal_set__processOnReturnDelegate)) ::System::Action_1<T>*  _processOnReturnDelegate;

/// @brief Convert operator to "::Rewired::Utils::Classes::Utility::IObjectPool"
constexpr operator  ::Rewired::Utils::Classes::Utility::IObjectPool*() noexcept;

/// @brief Convert operator to "::Rewired::Utils::Classes::Utility::IObjectPool_1<T>"
constexpr operator  ::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*() noexcept;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear(bool  reduceSize) ;

/// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T CreateInstance() ;

/// @brief Method FzyMPiZiZsuyBzupSNVxLhiAecukA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool FzyMPiZiZsuyBzupSNVxLhiAecukA(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T Get() ;

/// @brief Method IncrementInstanceCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline uint64_t IncrementInstanceCount() ;

static inline ::Rewired::Utils::Classes::Utility::ObjectPool_1<T>* New_ctor(::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Utility::ObjectPool_1<T>* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Action_1<T>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Return(T  item) ;

constexpr uint64_t const& __cordl_internal_get_MExAHlXCUbKDCtDABZucXbYGfgaHA() const;

constexpr uint64_t& __cordl_internal_get_MExAHlXCUbKDCtDABZucXbYGfgaHA() ;

constexpr ::System::Func_1<T>* const& __cordl_internal_get__createInstanceDelegate() const;

constexpr ::System::Func_1<T>*& __cordl_internal_get__createInstanceDelegate() ;

constexpr ::System::Collections::Generic::Queue_1<T>* const& __cordl_internal_get__pool() const;

constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get__pool() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get__processOnReturnDelegate() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get__processOnReturnDelegate() ;

constexpr void __cordl_internal_set_MExAHlXCUbKDCtDABZucXbYGfgaHA(uint64_t  value) ;

constexpr void __cordl_internal_set__createInstanceDelegate(::System::Func_1<T>*  value) ;

constexpr void __cordl_internal_set__pool(::System::Collections::Generic::Queue_1<T>*  value) ;

constexpr void __cordl_internal_set__processOnReturnDelegate(::System::Action_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Action_1<T>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method csuMBEHlcREkwLsIdNaPJAtpUkeX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* csuMBEHlcREkwLsIdNaPJAtpUkeX() ;

/// @brief Method get_InstanceCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline uint64_t get_InstanceCount() ;

/// @brief Convert to "::Rewired::Utils::Classes::Utility::IObjectPool"
constexpr ::Rewired::Utils::Classes::Utility::IObjectPool* i___Rewired__Utils__Classes__Utility__IObjectPool() noexcept;

/// @brief Convert to "::Rewired::Utils::Classes::Utility::IObjectPool_1<T>"
constexpr ::Rewired::Utils::Classes::Utility::IObjectPool_1<T>* i___Rewired__Utils__Classes__Utility__IObjectPool_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPool_1(ObjectPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPool_1(ObjectPool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2987};

/// @brief Field _pool, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<T>*  ____pool;

/// @brief Field _createInstanceDelegate, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<T>*  ____createInstanceDelegate;

/// @brief Field _processOnReturnDelegate, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<T>*  ____processOnReturnDelegate;

/// @brief Field MExAHlXCUbKDCtDABZucXbYGfgaHA, offset: 0x28, size: 0x8, def value: None
 uint64_t  ___MExAHlXCUbKDCtDABZucXbYGfgaHA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Utility
