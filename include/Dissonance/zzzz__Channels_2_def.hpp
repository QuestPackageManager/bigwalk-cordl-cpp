#pragma once
// IWYU pragma private; include "Dissonance/Channels_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Channels_2)
namespace Dissonance::Audio::Capture {
class IChannelPriorityProvider;
}
namespace Dissonance::Datastructures {
template<typename T>
class Pool_1;
}
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
class ChannelProperties;
}
namespace Dissonance {
template<typename T,typename TId>
class Channels_2___c__DisplayClass12_0;
}
namespace Dissonance {
class Log;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct Dictionary_2_Enumerator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Dissonance {
template<typename T,typename TId>
class Channels_2;
}
namespace Dissonance {
template<typename T,typename TId>
class Channels_2___c__DisplayClass12_0;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Channels_2);
MARK_GEN_REF_T_PTR(::Dissonance::Channels_2___c__DisplayClass12_0);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Channels_2, "Dissonance", "Channels`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Channels_2___c__DisplayClass12_0, "Dissonance", "Channels`2/<>c__DisplayClass12_0");
// Dependencies System.Object
namespace Dissonance {
// cpp template
template<typename T,typename TId>
// Is value type: false
// CS Name: Dissonance.Channels`2/<>c__DisplayClass12_0<T,TId>
class CORDL_TYPE Channels_2___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field priorityProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_priorityProvider, put=__cordl_internal_set_priorityProvider)) ::Dissonance::Audio::Capture::IChannelPriorityProvider*  priorityProvider;

static inline ::Dissonance::Channels_2___c__DisplayClass12_0<T,TId>* New_ctor() ;

constexpr ::Dissonance::Audio::Capture::IChannelPriorityProvider* const& __cordl_internal_get_priorityProvider() const;

constexpr ::Dissonance::Audio::Capture::IChannelPriorityProvider*& __cordl_internal_get_priorityProvider() ;

constexpr void __cordl_internal_set_priorityProvider(::Dissonance::Audio::Capture::IChannelPriorityProvider*  value) ;

/// @brief Method <.ctor>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::ChannelProperties* __ctor_b__0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Channels_2___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Channels_2___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Channels_2___c__DisplayClass12_0(Channels_2___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Channels_2___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Channels_2___c__DisplayClass12_0(Channels_2___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16783};

/// @brief Field priorityProvider, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::IChannelPriorityProvider*  ___priorityProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance
// Dependencies System.Object
namespace Dissonance {
// cpp template
template<typename T,typename TId>
// Is value type: false
// CS Name: Dissonance.Channels`2<T,TId>
class CORDL_TYPE Channels_2 : public ::System::Object {
public:
// Declarations
using __c__DisplayClass12_0 = ::Dissonance::Channels_2___c__DisplayClass12_0<T, TId>;

/// @brief Field ClosedChannel, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ClosedChannel, put=__cordl_internal_set_ClosedChannel)) ::System::Action_2<TId,::Dissonance::ChannelProperties*>*  ClosedChannel;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field Log, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Log, put=__cordl_internal_set_Log)) ::Dissonance::Log*  Log;

/// @brief Field OpenedChannel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OpenedChannel, put=__cordl_internal_set_OpenedChannel)) ::System::Action_2<TId,::Dissonance::ChannelProperties*>*  OpenedChannel;

/// @brief Field _nextId, offset 0x28, size 0x2 
 __declspec(property(get=__cordl_internal_get__nextId, put=__cordl_internal_set__nextId)) uint16_t  _nextId;

/// @brief Field _openChannelsBySubId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__openChannelsBySubId, put=__cordl_internal_set__openChannelsBySubId)) ::System::Collections::Generic::Dictionary_2<uint16_t,T>*  _openChannelsBySubId;

/// @brief Field _propertiesPool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__propertiesPool, put=__cordl_internal_set__propertiesPool)) ::Dissonance::Datastructures::Pool_1<::Dissonance::ChannelProperties*>*  _propertiesPool;

/// @brief Method Close, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Close(T  channel) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T  item) ;

/// @brief Method CreateChannel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T CreateChannel(uint16_t  subscriptionId, TId  channelId, ::Dissonance::ChannelProperties*  properties) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2_Enumerator<uint16_t,T> GetEnumerator() ;

static inline ::Dissonance::Channels_2<T,TId>* New_ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  priorityProvider) ;

/// @brief Method Open, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Open(TId  id, bool  positional, ::Dissonance::ChannelPriority  priority, float_t  amplitudeMultiplier) ;

/// @brief Method Refresh, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Refresh() ;

constexpr ::System::Action_2<TId,::Dissonance::ChannelProperties*>* const& __cordl_internal_get_ClosedChannel() const;

constexpr ::System::Action_2<TId,::Dissonance::ChannelProperties*>*& __cordl_internal_get_ClosedChannel() ;

constexpr ::Dissonance::Log* const& __cordl_internal_get_Log() const;

constexpr ::Dissonance::Log*& __cordl_internal_get_Log() ;

constexpr ::System::Action_2<TId,::Dissonance::ChannelProperties*>* const& __cordl_internal_get_OpenedChannel() const;

constexpr ::System::Action_2<TId,::Dissonance::ChannelProperties*>*& __cordl_internal_get_OpenedChannel() ;

constexpr uint16_t const& __cordl_internal_get__nextId() const;

constexpr uint16_t& __cordl_internal_get__nextId() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,T>* const& __cordl_internal_get__openChannelsBySubId() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,T>*& __cordl_internal_get__openChannelsBySubId() ;

constexpr ::Dissonance::Datastructures::Pool_1<::Dissonance::ChannelProperties*>* const& __cordl_internal_get__propertiesPool() const;

constexpr ::Dissonance::Datastructures::Pool_1<::Dissonance::ChannelProperties*>*& __cordl_internal_get__propertiesPool() ;

constexpr void __cordl_internal_set_ClosedChannel(::System::Action_2<TId,::Dissonance::ChannelProperties*>*  value) ;

constexpr void __cordl_internal_set_Log(::Dissonance::Log*  value) ;

constexpr void __cordl_internal_set_OpenedChannel(::System::Action_2<TId,::Dissonance::ChannelProperties*>*  value) ;

constexpr void __cordl_internal_set__nextId(uint16_t  value) ;

constexpr void __cordl_internal_set__openChannelsBySubId(::System::Collections::Generic::Dictionary_2<uint16_t,T>*  value) ;

constexpr void __cordl_internal_set__propertiesPool(::Dissonance::Datastructures::Pool_1<::Dissonance::ChannelProperties*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  priorityProvider) ;

/// @brief Method add_ClosedChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_ClosedChannel(::System::Action_2<TId,::Dissonance::ChannelProperties*>*  value) ;

/// @brief Method add_OpenedChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_OpenedChannel(::System::Action_2<TId,::Dissonance::ChannelProperties*>*  value) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method remove_ClosedChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_ClosedChannel(::System::Action_2<TId,::Dissonance::ChannelProperties*>*  value) ;

/// @brief Method remove_OpenedChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_OpenedChannel(::System::Action_2<TId,::Dissonance::ChannelProperties*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Channels_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Channels_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Channels_2(Channels_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Channels_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Channels_2(Channels_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16784};

/// @brief Field Log, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Log*  ___Log;

/// @brief Field _openChannelsBySubId, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint16_t,T>*  ____openChannelsBySubId;

/// @brief Field _propertiesPool, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Datastructures::Pool_1<::Dissonance::ChannelProperties*>*  ____propertiesPool;

/// @brief Field _nextId, offset: 0x28, size: 0x2, def value: None
 uint16_t  ____nextId;

/// @brief Field OpenedChannel, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<TId,::Dissonance::ChannelProperties*>*  ___OpenedChannel;

/// @brief Field ClosedChannel, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<TId,::Dissonance::ChannelProperties*>*  ___ClosedChannel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance
