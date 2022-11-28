using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GPGSManager : MonoBehaviour
{

    private void Start()
    {
        GPGSBinder.Inst.Login();
        GameManager.OnGameOver.AddListener(MaxHeightUpdate);
    }

    public void OnOpenRanking()
    {
        GPGSBinder.Inst.ShowTargetLeaderboardUI(GPGSIds.leaderboard_height);
    }

    private void MaxHeightUpdate()
    {
        GPGSBinder.Inst.ReportLeaderboard(GPGSIds.leaderboard_height, GameManager.MaxHeight);
    }
}
