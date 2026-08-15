#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Channel_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Channel_2)
namespace Cysharp::Threading::Tasks {
template<typename T>
class ChannelReader_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ChannelWriter_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename TWrite,typename TRead>
class Channel_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Channel_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Channel_2, "Cysharp.Threading.Tasks", "Channel`2");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename TWrite,typename TRead>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Channel`2<TWrite,TRead>
class CORDL_TYPE Channel_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Reader, put=set_Reader)) ::Cysharp::Threading::Tasks::ChannelReader_1<TRead>*  Reader;

 __declspec(property(get=get_Writer, put=set_Writer)) ::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>*  Writer;

/// @brief Field <Reader>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Reader_k__BackingField, put=__cordl_internal_set__Reader_k__BackingField)) ::Cysharp::Threading::Tasks::ChannelReader_1<TRead>*  _Reader_k__BackingField;

/// @brief Field <Writer>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Writer_k__BackingField, put=__cordl_internal_set__Writer_k__BackingField)) ::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>*  _Writer_k__BackingField;

static inline ::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>* New_ctor() ;

constexpr ::Cysharp::Threading::Tasks::ChannelReader_1<TRead>* const& __cordl_internal_get__Reader_k__BackingField() const;

constexpr ::Cysharp::Threading::Tasks::ChannelReader_1<TRead>*& __cordl_internal_get__Reader_k__BackingField() ;

constexpr ::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>* const& __cordl_internal_get__Writer_k__BackingField() const;

constexpr ::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>*& __cordl_internal_get__Writer_k__BackingField() ;

constexpr void __cordl_internal_set__Reader_k__BackingField(::Cysharp::Threading::Tasks::ChannelReader_1<TRead>*  value) ;

constexpr void __cordl_internal_set__Writer_k__BackingField(::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Reader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::ChannelReader_1<TRead>* get_Reader() ;

/// @brief Method get_Writer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>* get_Writer() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::ChannelReader_1<TRead>* op_Implicit___Cysharp__Threading__Tasks__ChannelReader_1_TRead__(::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*  channel) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>* op_Implicit___Cysharp__Threading__Tasks__ChannelWriter_1_TWrite__(::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*  channel) ;

/// @brief Method set_Reader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Reader(::Cysharp::Threading::Tasks::ChannelReader_1<TRead>*  value) ;

/// @brief Method set_Writer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Writer(::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Channel_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Channel_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Channel_2(Channel_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Channel_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Channel_2(Channel_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14184};

/// @brief Field <Reader>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ChannelReader_1<TRead>*  ____Reader_k__BackingField;

/// @brief Field <Writer>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>*  ____Writer_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
