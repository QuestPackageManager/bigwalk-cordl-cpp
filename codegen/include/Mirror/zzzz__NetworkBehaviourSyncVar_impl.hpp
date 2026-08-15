#pragma once
// IWYU pragma private; include "Mirror/NetworkBehaviourSyncVar.hpp"
#include "Mirror/zzzz__NetworkBehaviourSyncVar_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkBehaviourSyncVar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkBehaviourSyncVar::*)(uint32_t, int32_t)>(&::Mirror::NetworkBehaviourSyncVar::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815378a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkBehaviourSyncVar>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkBehaviourSyncVar.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkBehaviourSyncVar::*)(::Mirror::NetworkBehaviourSyncVar)>(&::Mirror::NetworkBehaviourSyncVar::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815377f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkBehaviourSyncVar>(),
                        {"Equals", {}, {::i2c::type_of<::Mirror::NetworkBehaviourSyncVar>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkBehaviourSyncVar.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkBehaviourSyncVar::*)(uint32_t, int32_t)>(&::Mirror::NetworkBehaviourSyncVar::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181537810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkBehaviourSyncVar>(),
                        {"Equals", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkBehaviourSyncVar.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::NetworkBehaviourSyncVar::*)()>(&::Mirror::NetworkBehaviourSyncVar::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181537830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkBehaviourSyncVar>(),
                    {::i2c::class_of<::Mirror::NetworkBehaviourSyncVar>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Mirror::NetworkBehaviourSyncVar::_ctor(uint32_t  netId, int32_t  componentIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkBehaviourSyncVar>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, netId, componentIndex);
}
inline bool Mirror::NetworkBehaviourSyncVar::Equals(::Mirror::NetworkBehaviourSyncVar  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkBehaviourSyncVar>(),
                        {"Equals", {}, {::i2c::type_of<::Mirror::NetworkBehaviourSyncVar>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Mirror::NetworkBehaviourSyncVar::Equals(uint32_t  netId, int32_t  componentIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkBehaviourSyncVar>(),
                        {"Equals", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, netId, componentIndex);
}
inline ::StringW Mirror::NetworkBehaviourSyncVar::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkBehaviourSyncVar>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Mirror::NetworkBehaviourSyncVar>"
constexpr  Mirror::NetworkBehaviourSyncVar::operator ::System::IEquatable_1<::Mirror::NetworkBehaviourSyncVar>*()  {
return static_cast<::System::IEquatable_1<::Mirror::NetworkBehaviourSyncVar>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Mirror::NetworkBehaviourSyncVar>"
constexpr ::System::IEquatable_1<::Mirror::NetworkBehaviourSyncVar>* Mirror::NetworkBehaviourSyncVar::i___System__IEquatable_1___Mirror__NetworkBehaviourSyncVar_()  {
return static_cast<::System::IEquatable_1<::Mirror::NetworkBehaviourSyncVar>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "netId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "componentIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::NetworkBehaviourSyncVar::NetworkBehaviourSyncVar(uint32_t  netId, uint8_t  componentIndex) noexcept  {
this->netId = netId;
this->componentIndex = componentIndex;
}
// Ctor Parameters []
constexpr ::Mirror::NetworkBehaviourSyncVar::NetworkBehaviourSyncVar()   {
}
