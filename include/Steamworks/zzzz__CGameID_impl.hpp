#pragma once
// IWYU pragma private; include "Steamworks/CGameID.hpp"
#include "Steamworks/zzzz__CGameID_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__CGameID_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::CGameID_EGameIDType::CGameID_EGameIDType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::CGameID_EGameIDType::CGameID_EGameIDType()   {
}
constexpr ::Steamworks::CGameID_EGameIDType  Steamworks::CGameID_EGameIDType::k_EGameIDTypeApp{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::CGameID_EGameIDType  Steamworks::CGameID_EGameIDType::k_EGameIDTypeGameMod{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::CGameID_EGameIDType  Steamworks::CGameID_EGameIDType::k_EGameIDTypeShortcut{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::CGameID_EGameIDType  Steamworks::CGameID_EGameIDType::k_EGameIDTypeP2P{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Steamworks::CGameID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CGameID::*)(uint64_t)>(&::Steamworks::CGameID::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CGameID::*)(::Steamworks::AppId_t)>(&::Steamworks::CGameID::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a87e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CGameID::*)(::Steamworks::AppId_t, uint32_t)>(&::Steamworks::CGameID::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805a87b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.IsSteamApp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CGameID::*)()>(&::Steamworks::CGameID::IsSteamApp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a85a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"IsSteamApp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.IsMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CGameID::*)()>(&::Steamworks::CGameID::IsMod)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"IsMod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.IsShortcut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CGameID::*)()>(&::Steamworks::CGameID::IsShortcut)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"IsShortcut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.IsP2PFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CGameID::*)()>(&::Steamworks::CGameID::IsP2PFile)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"IsP2PFile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.AppID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::AppId_t (::Steamworks::CGameID::*)()>(&::Steamworks::CGameID::AppID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"AppID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CGameID_EGameIDType (::Steamworks::CGameID::*)()>(&::Steamworks::CGameID::Type)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.ModID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Steamworks::CGameID::*)()>(&::Steamworks::CGameID::ModID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a86d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"ModID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CGameID::*)()>(&::Steamworks::CGameID::IsValid)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805a85c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CGameID::*)()>(&::Steamworks::CGameID::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18035d7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CGameID::*)(uint64_t)>(&::Steamworks::CGameID::Set)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"Set", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.SetAppID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CGameID::*)(::Steamworks::AppId_t)>(&::Steamworks::CGameID::SetAppID)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805a86f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"SetAppID", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.SetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CGameID::*)(::Steamworks::CGameID_EGameIDType)>(&::Steamworks::CGameID::SetType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805a8740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"SetType", {}, {::i2c::type_of<::Steamworks::CGameID_EGameIDType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.SetModID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CGameID::*)(uint32_t)>(&::Steamworks::CGameID::SetModID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"SetModID", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::CGameID::*)()>(&::Steamworks::CGameID::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::CGameID>(),
                    {::i2c::class_of<::Steamworks::CGameID>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CGameID::*)(::System::Object*)>(&::Steamworks::CGameID::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805a8490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::CGameID>(),
                    {::i2c::class_of<::Steamworks::CGameID>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::CGameID::*)()>(&::Steamworks::CGameID::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::CGameID>(),
                    {::i2c::class_of<::Steamworks::CGameID>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CGameID, ::Steamworks::CGameID)>(&::Steamworks::CGameID::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::CGameID>(), ::i2c::type_of<::Steamworks::CGameID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CGameID, ::Steamworks::CGameID)>(&::Steamworks::CGameID::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::CGameID>(), ::i2c::type_of<::Steamworks::CGameID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.op_Explicit___Steamworks__CGameID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CGameID (*)(uint64_t)>(&::Steamworks::CGameID::op_Explicit___Steamworks__CGameID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.op_Explicit_uint64_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::Steamworks::CGameID)>(&::Steamworks::CGameID::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::CGameID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CGameID::*)(::Steamworks::CGameID)>(&::Steamworks::CGameID::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::CGameID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CGameID.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::CGameID::*)(::Steamworks::CGameID)>(&::Steamworks::CGameID::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::CGameID>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::CGameID::_ctor(uint64_t  GameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, GameID);
}
inline void Steamworks::CGameID::_ctor(::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nAppID);
}
inline void Steamworks::CGameID::_ctor(::Steamworks::AppId_t  nAppID, uint32_t  nModID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nAppID, nModID);
}
inline bool Steamworks::CGameID::IsSteamApp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"IsSteamApp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CGameID::IsMod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"IsMod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CGameID::IsShortcut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"IsShortcut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CGameID::IsP2PFile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"IsP2PFile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Steamworks::AppId_t Steamworks::CGameID::AppID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"AppID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::AppId_t>(*this, ___internal_method);
}
inline ::Steamworks::CGameID_EGameIDType Steamworks::CGameID::Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CGameID_EGameIDType>(*this, ___internal_method);
}
inline uint32_t Steamworks::CGameID::ModID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"ModID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline bool Steamworks::CGameID::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Steamworks::CGameID::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Steamworks::CGameID::Set(uint64_t  GameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"Set", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, GameID);
}
inline void Steamworks::CGameID::SetAppID(::Steamworks::AppId_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"SetAppID", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Steamworks::CGameID::SetType(::Steamworks::CGameID_EGameIDType  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"SetType", {}, {::i2c::type_of<::Steamworks::CGameID_EGameIDType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Steamworks::CGameID::SetModID(uint32_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"SetModID", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::StringW Steamworks::CGameID::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CGameID>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::CGameID::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CGameID>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::CGameID::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CGameID>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::CGameID::op_Equality(::Steamworks::CGameID  x, ::Steamworks::CGameID  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::CGameID>(), ::i2c::type_of<::Steamworks::CGameID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::CGameID::op_Inequality(::Steamworks::CGameID  x, ::Steamworks::CGameID  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::CGameID>(), ::i2c::type_of<::Steamworks::CGameID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::CGameID Steamworks::CGameID::op_Explicit___Steamworks__CGameID(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CGameID>(nullptr, ___internal_method, value);
}
inline uint64_t Steamworks::CGameID::op_Explicit_uint64_t(::Steamworks::CGameID  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::CGameID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::CGameID::Equals(::Steamworks::CGameID  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::CGameID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::CGameID::CompareTo(::Steamworks::CGameID  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CGameID>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::CGameID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::CGameID>"
constexpr  Steamworks::CGameID::operator ::System::IEquatable_1<::Steamworks::CGameID>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::CGameID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::CGameID>"
constexpr ::System::IEquatable_1<::Steamworks::CGameID>* Steamworks::CGameID::i___System__IEquatable_1___Steamworks__CGameID_()  {
return static_cast<::System::IEquatable_1<::Steamworks::CGameID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::CGameID>"
constexpr  Steamworks::CGameID::operator ::System::IComparable_1<::Steamworks::CGameID>*()  {
return static_cast<::System::IComparable_1<::Steamworks::CGameID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::CGameID>"
constexpr ::System::IComparable_1<::Steamworks::CGameID>* Steamworks::CGameID::i___System__IComparable_1___Steamworks__CGameID_()  {
return static_cast<::System::IComparable_1<::Steamworks::CGameID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_GameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::CGameID::CGameID(uint64_t  m_GameID) noexcept  {
this->m_GameID = m_GameID;
}
// Ctor Parameters []
constexpr ::Steamworks::CGameID::CGameID()   {
}
