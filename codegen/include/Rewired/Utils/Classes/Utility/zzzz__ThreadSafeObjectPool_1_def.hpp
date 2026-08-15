#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/ThreadSafeObjectPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadSafeObjectPool_1)
namespace Rewired::Utils::Classes::Data {
template<typename T>
class AList_1;
}
namespace Rewired::Utils::Classes::Utility {
template<typename T>
class IObjectPool_1;
}
namespace Rewired::Utils::Classes::Utility {
class IObjectPool;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
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
class ThreadSafeObjectPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1, "Rewired.Utils.Classes.Utility", "ThreadSafeObjectPool`1");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.ThreadSafeObjectPool`1<T>
class CORDL_TYPE ThreadSafeObjectPool_1 : public ::System::Object {
public:
// Declarations
/// @brief Field GmoVmndvzEeynECRbJpZzoTFpclU, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_GmoVmndvzEeynECRbJpZzoTFpclU, put=__cordl_internal_set_GmoVmndvzEeynECRbJpZzoTFpclU)) int32_t  GmoVmndvzEeynECRbJpZzoTFpclU;

 __declspec(property(get=get_InstanceCount)) uint64_t  InstanceCount;

/// @brief Field _createInstanceDelegate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__createInstanceDelegate, put=__cordl_internal_set__createInstanceDelegate)) ::System::Func_1<T>*  _createInstanceDelegate;

/// @brief Field _pool, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__pool, put=__cordl_internal_set__pool)) ::Rewired::Utils::Classes::Data::AList_1<T>*  _pool;

/// @brief Field _processOnReturnDelegate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__processOnReturnDelegate, put=__cordl_internal_set__processOnReturnDelegate)) ::System::Action_1<T>*  _processOnReturnDelegate;

/// @brief Field ukytpvqOuatTRglkifmDPFzWfrmCA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ukytpvqOuatTRglkifmDPFzWfrmCA, put=__cordl_internal_set_ukytpvqOuatTRglkifmDPFzWfrmCA)) uint64_t  ukytpvqOuatTRglkifmDPFzWfrmCA;

/// @brief Convert operator to "::Rewired::Utils::Classes::Utility::IObjectPool"
constexpr operator  ::Rewired::Utils::Classes::Utility::IObjectPool*() noexcept;

/// @brief Convert operator to "::Rewired::Utils::Classes::Utility::IObjectPool_1<T>"
constexpr operator  ::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*() noexcept;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear(bool  reduceSize) ;

/// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T CreateInstance() ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T Get() ;

/// @brief Method IncrementInstanceCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline uint64_t IncrementInstanceCount() ;

static inline ::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>* New_ctor(::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Action_1<T>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method OLNDluDTbhjphAMFOlBcpqmdTFFHA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool OLNDluDTbhjphAMFOlBcpqmdTFFHA(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Return(T  item) ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Return(::System::Collections::Generic::IList_1<T>*  items) ;

constexpr int32_t const& __cordl_internal_get_GmoVmndvzEeynECRbJpZzoTFpclU() const;

constexpr int32_t& __cordl_internal_get_GmoVmndvzEeynECRbJpZzoTFpclU() ;

constexpr ::System::Func_1<T>* const& __cordl_internal_get__createInstanceDelegate() const;

constexpr ::System::Func_1<T>*& __cordl_internal_get__createInstanceDelegate() ;

constexpr ::Rewired::Utils::Classes::Data::AList_1<T>* const& __cordl_internal_get__pool() const;

constexpr ::Rewired::Utils::Classes::Data::AList_1<T>*& __cordl_internal_get__pool() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get__processOnReturnDelegate() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get__processOnReturnDelegate() ;

constexpr uint64_t const& __cordl_internal_get_ukytpvqOuatTRglkifmDPFzWfrmCA() const;

constexpr uint64_t& __cordl_internal_get_ukytpvqOuatTRglkifmDPFzWfrmCA() ;

constexpr void __cordl_internal_set_GmoVmndvzEeynECRbJpZzoTFpclU(int32_t  value) ;

constexpr void __cordl_internal_set__createInstanceDelegate(::System::Func_1<T>*  value) ;

constexpr void __cordl_internal_set__pool(::Rewired::Utils::Classes::Data::AList_1<T>*  value) ;

constexpr void __cordl_internal_set__processOnReturnDelegate(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set_ukytpvqOuatTRglkifmDPFzWfrmCA(uint64_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Action_1<T>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method get_InstanceCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline uint64_t get_InstanceCount() ;

/// @brief Convert to "::Rewired::Utils::Classes::Utility::IObjectPool"
constexpr ::Rewired::Utils::Classes::Utility::IObjectPool* i___Rewired__Utils__Classes__Utility__IObjectPool() noexcept;

/// @brief Convert to "::Rewired::Utils::Classes::Utility::IObjectPool_1<T>"
constexpr ::Rewired::Utils::Classes::Utility::IObjectPool_1<T>* i___Rewired__Utils__Classes__Utility__IObjectPool_1_T_() noexcept;

/// @brief Method vBlaLvfnUYlgjBWtHwjIOwSLKbTiB, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* vBlaLvfnUYlgjBWtHwjIOwSLKbTiB() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadSafeObjectPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeObjectPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadSafeObjectPool_1(ThreadSafeObjectPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeObjectPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadSafeObjectPool_1(ThreadSafeObjectPool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2988};

/// @brief Field accDvUuBnZGxKchjZtRzEdIZUBplA offset 0xffffffff size 0x4
static constexpr int32_t  accDvUuBnZGxKchjZtRzEdIZUBplA{static_cast<int32_t>(0x1)};

/// @brief Field dwRmigfYDEpqYPPtjShYgIUDIpjt offset 0xffffffff size 0x4
static constexpr int32_t  dwRmigfYDEpqYPPtjShYgIUDIpjt{static_cast<int32_t>(0x0)};

/// @brief Field _pool, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::AList_1<T>*  ____pool;

/// @brief Field _createInstanceDelegate, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<T>*  ____createInstanceDelegate;

/// @brief Field _processOnReturnDelegate, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<T>*  ____processOnReturnDelegate;

/// @brief Field ukytpvqOuatTRglkifmDPFzWfrmCA, offset: 0x28, size: 0x8, def value: None
 uint64_t  ___ukytpvqOuatTRglkifmDPFzWfrmCA;

/// @brief Field GmoVmndvzEeynECRbJpZzoTFpclU, offset: 0x30, size: 0x4, def value: None
 int32_t  ___GmoVmndvzEeynECRbJpZzoTFpclU;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Utility
